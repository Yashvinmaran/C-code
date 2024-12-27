# include <iostream>
using namespace std;

class node{
    public:
    int value;
    node* left;
    node* right;
    
    node(int value){
        this->value = value;
        left = right = nullptr;
    }
};

node* tree(){
    int data;
    cout<<"Enter the value in tree (for no value -1):";
    cin>>data;
    
    if(data == -1){
        return nullptr;
    }
    
    node* newroot = new node(data);
    
    cout<<"Enter left of the "<<data<<" :\n";
    newroot->left = tree();
    
    cout<<"Enter right of the "<<data<<" :\n";
    newroot->right = tree();
    return newroot;
}

// void Inorder(node* n){
//     if (n == nullptr)return;
//     Inorder(n->left);
//     cout<<n->value<<" ";
//     Inorder(n->right);
    
// }

void count(node* nodes, int& c){
    if(nodes == nullptr)return ;
    if(nodes->left == nullptr && nodes->right == nullptr){
        c++;
    }
    
    count(nodes->left,c);
    count(nodes->right,c);
}

int main(){
   node* value;
   cout<<"Create tree :"<<endl;
   value = tree();
   int leafcount = 0;
   count(value,leafcount);
   cout << "Number of leaf nodes: " << leafcount << endl;
//   cout<<"The Inorder is :";
//   Inorder(value);
}





