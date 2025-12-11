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

int heightOfTree(Node*root){
    if(root == NULL){
        return 0;
    }
    int leftHeight=heightOfTree(root->left);
    int rightHeight=heightOfTree(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
}

int main(){
    Node*tree=buildTree();
    int height=heightOfTree(tree);
    cout<<"height Of tree Is : "<<height;
}

