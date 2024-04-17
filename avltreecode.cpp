#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Student {
    public:
        int reg_no;
        string st_name;
        float cgpa;
    
        Student() { }
        Student(int reg_no, string st_name, float cgpa) {
            this->reg_no = reg_no;
            this->st_name = st_name;
            this->cgpa = cgpa;
        }
        void inputOutput() {
            cout << "Student Info: \n";
            cout << "Registration No: " << reg_no << "\n";
            cout << "Student Name: " << st_name << "\n";
            cout << "CGPA: " << cgpa << "\n";
        }
};

class AVL_Tree {
    private:
        struct Node {
            Student data;
            int height;
            Node *left;
            Node *right;
        };

        int height(Node *N) {
            if (N == NULL)
                return 0;
            return N->height;
        }

        int max(int a, int b) {
            return (a > b) ? a : b;
        }

        Node* newNode(Student data) {
            Node* node = new Node();
            node->data = data;
            node->height = 1;
            node->left = NULL;
            node->right = NULL;
            return(node);
        }

        Node *rightRotate(Node *y) {
            Node *x = y->left;
            Node *T2 = x->right;

            x->right = y;
            y->left = T2;

            y->height = max(height(y->left), height(y->right)) + 1;
            x->height = max(height(x->left), height(x->right)) + 1;

            return x;
        }

        Node *leftRotate(Node *x) {
            Node *y = x->right;
            Node *T2 = y->left;

            y->left = x;
            x->right = T2;

            x->height = max(height(x->left), height(x->right)) + 1;
            y->height = max(height(y->left), height(y->right)) + 1;

            return y;
        }

        int getBalance(Node *N) {
            if (N == NULL)
                return 0;

            return height(N->left) - height(N->right);
        }

        Node* insert(Node* node, Student data) {
            if (node == NULL)
                return(newNode(data));

            if (data.reg_no < node->data.reg_no)
                node->left = insert(node->left, data);
            else if (data.reg_no > node->data.reg_no)
                node->right = insert(node->right, data);
            else
                return node;

            node->height = 1 + max(height(node->left),
                                    height(node->right));

            int balance = getBalance(node);

            if (balance > 1 && data.reg_no < node->left->data.reg_no)
                return rightRotate(node);

            if (balance < -1 && data.reg_no > node->right->data.reg_no)
                return leftRotate(node);

            if (balance > 1 && data.reg_no > node->left->data.reg_no) {
                node->left = leftRotate(node->left);
                return rightRotate(node);
            }

            if (balance < -1 && data.reg_no < node->right->data.reg_no) {
                node->right = rightRotate(node->right);
                return leftRotate(node);
            }

            return node;
        }

        void preOrder(Node *root) {
            if (root != NULL) {
                root->data.inputOutput();
                preOrder(root->left);
                preOrder(root->right);
            }
        }

        Node* root;

    public:
        AVL_Tree() {
            root = NULL;
        }

        void insertData(Student data) {
            root = insert(root, data);
        }

        void display() {
            preOrder(root);
        }
};

int main() {
    AVL_Tree tree;

    tree.insertData(Student(121, "Naqi", 4.0));
    tree.insertData(Student(122, "Ali", 3.5));
    tree.insertData(Student(123, "Asghar", 2.5));
    tree.insertData(Student(124, "Rabab", 3.7));

    tree.display();

    return 0;
}
