#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *left, *right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

Node* insert() {
    int value;
    cout << "Insert value (-1 for no node): ";
    cin >> value;

    if (value == -1) return nullptr;

    Node* node = new Node(value);
    cout << "Left child of " << value << ":\n";
    node->left = insert();

    cout << "Right child of " << value << ":\n";
    node->right = insert();

    return node;
}

void print(Node* node) {
    if (!node) return;
    print(node->left);
    cout << node->value << " ";
    print(node->right);
}

int main() {
    cout << "Build the binary tree:\n";
    Node* root = insert();

    cout << "In-order traversal of the tree:\n";
    print(root);
    return 0;
}
