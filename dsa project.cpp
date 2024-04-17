
#include <iostream>
#include <list>
#include <string>
#include <queue>
using namespace std;

const int HashTableSize = 15;
const int MaxTransactionHistorySize = 10;
class BankTransaction
{
public:
    string transactionType;
    double transactionAmount;
    string transactionDescription;
    BankTransaction(string type, double amount, string desc)
    {
        this->transactionType = type;
        this->transactionDescription = desc;
        this->transactionAmount = amount;
    }
};

class BankAccountNode
{
public:
    string customerName, customerAddress;
    int accountNumber;
    long long int contactInfo;
    BankAccountNode *left, *right, *next;
    queue<pair<BankTransaction, time_t>> transactionHistory;

    BankAccountNode(string name, long long int contactInfo, string address, int accNumber)
    {
        right = NULL;
        left = NULL;
        next = NULL;

        this->customerName = name;
        this->contactInfo = contactInfo;
        this->accountNumber = accNumber;
        this->customerAddress = address;
    }
};

class BankCustomer
{
public:
    BankAccountNode *head;
    BankAccountNode *root;
    list<BankAccountNode *> hashTable[HashTableSize];

    BankCustomer() : head(nullptr), root(nullptr) {}

   void openNewAccount(string name, int accountNumber, string address, long long int contact)
    {
        BankAccountNode *newAccount = new BankAccountNode(name, contact, address, accountNumber); 
    if (head == NULL)
    {
        head = newAccount;
    }
    else
    {
        BankAccountNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newAccount;
    }
        root = insertInBST(root, newAccount);

        int hashValue = accountNumber % HashTableSize;
        hashTable[hashValue].push_back(newAccount);
    }

    BankAccountNode *insertInBST(BankAccountNode *root, BankAccountNode *newNode)
    {
        if (root == NULL)
        {
            return newNode;
        }
        if (newNode->accountNumber < root->accountNumber)
        {
            root->left = insertInBST(root->left, newNode);
        }
        else if (newNode->accountNumber > root->accountNumber)
        {
            root->right = insertInBST(root->right, newNode);
        }
        return root;
    }

    bool searchInBST(BankAccountNode *root, int accountNumber)
    {
        if (root == NULL)
        {
            return false;
        }
        else if (root->accountNumber == accountNumber)
        {
            return true;
        }
        else if (root->accountNumber > accountNumber)
        {
            return searchInBST(root->left, accountNumber);
        }
        else if (root->accountNumber < accountNumber)
        {
            return searchInBST(root->right, accountNumber);
        }
    }

    bool searchInHashTable(int accountNumber)
    {
        int hashValue = accountNumber % HashTableSize;
        for (BankAccountNode *node : hashTable[hashValue])
        {
            if (node->accountNumber == accountNumber)
            {
                return true;
            }
        }
        return false;
    }

    void makeDeposit(int accountNumber, double amount, string description)
    {
        BankAccountNode *account = findAccount(accountNumber);
        if (account != NULL)
        {
            BankTransaction transaction("Deposit", amount, description);
            account->transactionHistory.push({transaction, time(nullptr)});
            manageTransactionHistory(account);
            cout << "Deposit of $" << amount << " successful for account " << accountNumber << endl;
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }

    void makeWithdrawal(int accountNumber, double amount, string description)
    {
        BankAccountNode *account = findAccount(accountNumber);
        if (account != NULL)
        {
            if (amount <= getBalance(account))
            {
                BankTransaction transaction("Withdrawal", amount, description);
                account->transactionHistory.push({transaction, time(nullptr)});
                manageTransactionHistory(account);
                cout << "Withdrawal of $" << amount << " successful for account " << accountNumber << endl;
            }
            else
            {
                cout << "Insufficient funds for withdrawal." << endl;
            }
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }

    void makeTransfer(int fromAccountNumber, int toAccountNumber, double amount, string description)
    {
        BankAccountNode *fromAccount = findAccount(fromAccountNumber);
        BankAccountNode *toAccount = findAccount(toAccountNumber);

        if (fromAccount != NULL && toAccount != NULL)
        {
            if (amount <= getBalance(fromAccount))
            {
                BankTransaction debitTransaction("Transfer (Debit)", amount, description);
                BankTransaction creditTransaction("Transfer (Credit)", amount, description);

                fromAccount->transactionHistory.push({debitTransaction, time(nullptr)});
                toAccount->transactionHistory.push({creditTransaction, time(nullptr)});

                manageTransactionHistory(fromAccount);
                manageTransactionHistory(toAccount);

                cout << "Transfer of $" << amount << " successful from account " << fromAccountNumber << " to account " << toAccountNumber << endl;
            }
            else
            {
                cout << "Insufficient funds for transfer." << endl;
            }
        }
        else
        {
            cout << "One or both accounts not found." << endl;
        }
    }

    double getBalance(BankAccountNode *account)
    {
        double balance = 0.0;
        queue<pair<BankTransaction, time_t>> tempQueue = account->transactionHistory;

        while (!tempQueue.empty())
        {
            BankTransaction transaction = tempQueue.front().first;
            tempQueue.pop();

            if (transaction.transactionType == "Deposit" || transaction.transactionType == "Transfer (Credit)")
            {
                balance += transaction.transactionAmount;
            }
            else if (transaction.transactionType == "Withdrawal" || transaction.transactionType == "Transfer (Debit)")
            {
                balance -= transaction.transactionAmount;
            }
        }

        return balance;
    }

    BankAccountNode *findAccount(int accountNumber)
    {
        int hashValue = accountNumber % HashTableSize;
        for (BankAccountNode *node : hashTable[hashValue])
        {
            if (node->accountNumber == accountNumber)
            {
                return node;
            }
        }
        return NULL;
    }

    void manageTransactionHistory(BankAccountNode *account)
    {
        while (account->transactionHistory.size() > MaxTransactionHistorySize)
        {
            account->transactionHistory.pop(); // Dequeue older transactions if the size exceeds the limit
        }
    }

    void displayAccounts()
{
    BankAccountNode *temp = head;
    if (temp == nullptr)
    {
        cout << "The list is empty" << endl;
        return;
    }

    while (temp != nullptr)
    {
        cout << "Account Number: " << temp->accountNumber << ", Name: " << temp->customerName
             << ", Contact Info: +92" << temp->contactInfo << ", Address: " << temp->customerAddress << endl;

        temp = temp->next; // Move to the next node
    }
    cout << endl;
}
};

int main()
{
    BankCustomer bankCustomer;
    int choice, accountNumber, toAccountNumber;
    string address, name, description;
    long long int phoneNumber;
    double amount;
    char continueChoice;

    do
    {
        cout << "1. Open New Account" << endl;
        cout << "2. Search Your Account By BST" << endl;
        cout << "3. Perform Transactions" << endl;
        cout << "4. Display Accounts" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your Choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter your Information" << endl;
            cout << "Name:";
            cin.ignore();
            getline(cin, name);
            cout << "Account Number: ";
            cin >> accountNumber;
            cout << "Address: ";
            cin.ignore();
            getline(cin, address);
            cout << "Phone number:";
            cin >> phoneNumber;

            bankCustomer.openNewAccount(name, accountNumber, address, phoneNumber);
            break;

        case 2:
            cout << "Enter the account number to search" << endl;
            cin >> accountNumber;

            if (bankCustomer.searchInBST(bankCustomer.root, accountNumber))
            {
                cout << "Account Found" << endl;
            }
            else
            {
                cout << "Account not found" << endl;
            }
            break;

        case 3:
            cout << "1. Deposit\n2. Withdraw\n3. Transfer" << endl;
            cout << "Enter transaction type (1, 2, or 3): ";
            int transactionType;
            cin >> transactionType;

            cout << "Enter account number: ";
            cin >> accountNumber;

            switch (transactionType)
            {
            case 1:
                cout << "Enter deposit amount: $";
                cin >> amount;
                cout << "Enter description: ";
                cin.ignore();
                getline(cin, description);
                bankCustomer.makeDeposit(accountNumber, amount, description);
                break;

            case 2:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                cout << "Enter description: ";
                cin.ignore();
                getline(cin, description);
                bankCustomer.makeWithdrawal(accountNumber, amount, description);
                break;

            case 3:
                cout << "Enter transfer amount: $";
                cin >> amount;
                cout << "Enter description: ";
                cin.ignore();
                getline(cin, description);
                cout << "Enter destination account number: ";
                cin >> toAccountNumber;
                bankCustomer.makeTransfer(accountNumber, toAccountNumber, amount, description);
                break;

            default:
                cout << "Invalid transaction type" << endl;
                break;
            }
            break;

        case 4:
            bankCustomer.displayAccounts();
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "Please enter a valid choice" << endl;
            break;
        }

        cout << "\nWould you like to perform another operation? (y/n)" << endl;
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}
