# include <iostream>
using namespace std;

class Node{
    public: int data;
    Node *left;
    Node *right;
    
    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

Node *createTree(Node *root)
{
    int data;
    cout<<"Enter the value\n";
    cin>>data;
    root = new Node(data);
    
    if(data == -1)
    {
        return nullptr;
    }
    cout<<"Enter value for left of "<<data<<endl;
    root->left = createTree(root->left);
    cout<<"Enter value for right of "<<data<<endl;
    root->right = createTree(root->right);
    
    return root;
}

void preorder(Node *n)
{
    if(n==nullptr)
    {
        return ;
    }
    
    cout<<n->data<<"\t";
    preorder(n->left);
    preorder(n->right);
}

void inorder(Node *n)
{
    if(n==nullptr)
    {
        return ;
    }
    
    inorder(n->left);
    cout<<n->data<<"\t";
    inorder(n->right);
}

void postorder(Node *n)
{
    if(n==nullptr)
    {
        return ;
    }
    
    postorder(n->left);
    postorder(n->right);
    cout<<n->data<<"\t";
}

int main()
{
    Node *root = nullptr;
    root = createTree(root);
    cout<<"\nPreorder\n";
    preorder(root);
    cout<<"\nInorder\n";
    inorder(root);
    cout<<"\nPostorder\n";
    postorder(root);
}





