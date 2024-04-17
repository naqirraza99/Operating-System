#include <iostream>
using namespace std;

// Node structure for Binary Search Tree

struct Node {
    int data;
    Node* left = NULL;
    Node* right = NULL;

    Node(int value) : data(value) {}
};


// Function to insert a node into the BST
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

// Function to display nodes of the tree (in-order traversal)
void displayNodes(Node* root) {
    if (root != NULL) {
        displayNodes(root->left);
        cout << root->data << " ";
        displayNodes(root->right);
    }
}

// Function to find the minimum value node in a BST
Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to delete a node from the BST
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root;
    }

    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Node with two children, get the inorder successor (smallest in the right subtree)
        Node* temp = findMin(root->right);

        // Copy the inorder successor's data to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int main() {
    // Creating a BST manually
    Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Displaying the nodes of the initial tree
    cout << "Nodes of the initial tree: ";
    displayNodes(root);
    cout << endl;

    // Deleting a certain node (e.g 40)
    int nodeToDelete = 40;
    root = deleteNode(root, nodeToDelete);

    // Displaying the tree again after deleting the node
    cout << "Tree after deleting node " << nodeToDelete << ": ";
    displayNodes(root);
    cout << endl;

    return 0;
}

