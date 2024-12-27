#include <iostream>
using namespace std;

// Definition of the Node class
class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        this->value = val;
        left = right = nullptr;
    }
};

// Function to insert a node into the BST
Node* insert(Node* root, int data) {
    if (data == -1) return nullptr; // Stop condition for input -1

    if (root == nullptr) {
        return new Node(data); // Create and return a new node if root is null
    }

    if (data < root->value) {
        root->left = insert(root->left, data); // Recursively insert in the left subtree
    } else {
        root->right = insert(root->right, data); // Recursively insert in the right subtree
    }

    return root;
}

// Function to traverse the BST in in-order
void printData(Node* root) {
    if (root == nullptr) return;

    printData(root->left); // Traverse the left subtree
    cout << root->value << " "; // Print the current node's value
    printData(root->right); // Traverse the right subtree
}

// Main function to execute the program
int main() {
    Node* root = nullptr;
    cout << "Insert the data into the tree (-1 to stop):\n";

    while (true) {
        int data;
        cout << "Enter data: ";
        cin >> data;

        if (data == -1) break; // Exit the loop on input -1
        root = insert(root, data); // Insert data into the tree
    }

    cout << "In-order traversal of the binary tree:\n";
    printData(root); // Display the tree's in-order traversal

    return 0;
}
