#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void printlist(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void insert_head(Node*& head, int val) {
    Node* first = new Node(val);
    first->next = head;
    head = first;
}

void insert_tail(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;  // Return false if the key is not found
}

int main() {
    Node* head = NULL;
    insert_head(head, 10);
    insert_tail(head, 15);
    insert_tail(head, 25);
    printlist(head);

    if (search(head, 5)) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found." << endl;
    }

    return 0;
}

