#include <iostream>

// Define a structure for a singly linked list node
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

// Define a class for the linked list
class LinkedList {
public:
    LinkedList() : head(nullptr) {}
    
    // Function to insert a new node at the beginning of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    
    // Function to display the elements of the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
    
    // Function to delete a node with a specific value from the list
    void remove(int value) {
        Node* current = head;
        Node* prev = nullptr;
        
        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }
        
        if (current == nullptr) {
            std::cout << "Element not found in the list." << std::endl;
            return;
        }
        
        if (prev == nullptr) {
            // If the element to be deleted is the head node
            head = current->next;
        } else {
            prev->next = current->next;
        }
        
        delete current;
        std::cout << "Element removed: " << value << std::endl;
    }
    
    // Destructor to release memory
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

private:
    Node* head;
};

int main() {
    LinkedList myList;
    
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);
    
    std::cout << "Linked List: ";
    myList.display();
    
    myList.remove(2);
    myList.remove(5); // Element not in the list
    
    std::cout << "Linked List after removal: ";
    myList.display();
    
    return 0;
}
