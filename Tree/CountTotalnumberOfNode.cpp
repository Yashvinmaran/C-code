# include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    
    Node(int value){
        this->value = value;
        left = right = nullptr;
    }
};

Node* Insert(Node* node){
    int data;
    cout<<"Insert value (for no value '-1'):";
    cin>>data;
    
    if(data == -1)return nullptr;
    node = new Node(data);
    
    cout<<"Enter left of "<<data<<" :"<<endl;
    node->left = Insert(node->left);
    
    cout<<"Enter right of "<<data<<" :"<<endl;
    node->right = Insert(node->right);
    
    return node;
}

void coutTotalNode(Node* tree, int& c){
    if(tree == nullptr)return;
    c++;
    
    coutTotalNode(tree->left, c);
    coutTotalNode(tree->right, c);
}


int main() {
    Node* root = nullptr;
    cout << "Build the tree:\n";
    root = Insert(root);

    int totalNodes = 0;
    coutTotalNode(root, totalNodes);

    cout << "Total number of nodes in the tree: " << totalNodes << endl;

    return 0;
}