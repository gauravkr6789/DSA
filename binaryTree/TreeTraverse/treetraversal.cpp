#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    int data;
    cin>>data;
    if(data == -1) return NULL;

    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

Node*preorder(Node*root){
    if(root == NULL){
        return NULL;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
    return root;
}
Node*postorder(Node*root){
    if(root == NULL){
        return NULL;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
    return root;
}

Node*inorder(Node*root){
    if(root == NULL){
        return NULL;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    return root;
}

int main(){
    Node*tree=buildTree();
    cout<<"Preorder traversal : "<<" ";
    preorder(tree);
    cout<<endl<<"Inorder traversal :"<<" ";
    inorder(tree);
    cout<<endl<<"Postorder traversal :"<<" ";
    postorder(tree);  
}
