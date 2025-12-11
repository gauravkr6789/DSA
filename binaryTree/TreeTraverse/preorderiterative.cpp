#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {
    int data;
    cin >> data;
    if (data == -1) return NULL;
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preorder(Node* root) {
    if(!root) return;
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* curr=s.top();
        s.pop();
        cout<<curr->data;
        if(curr->right){
            s.push(curr->right);
        }
        if(curr->left){
            s.push(curr->left);
        }
    }
    
}

int main() {
    Node* tree = buildTree();
    cout << "\npre traversal: ";
    preorder(tree);
}
