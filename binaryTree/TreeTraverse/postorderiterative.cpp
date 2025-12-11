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

void postorder(Node* root) {
    if(!root) return;
    stack<Node*> stack1,stack2;
    stack1.push(root);
    while(!stack1.empty()){
        Node*curr=stack1.top();
        stack1.pop();
        stack2.push(curr);

        if(curr->left){
            stack1.push(curr->left);
        }
        if(curr->right){
            stack1.push(curr->right);
        }
    }
    while(!stack2.empty()){
        Node*curr=stack2.top();
        cout<<curr->data;
        stack2.pop();
    }
    
    
}

int main() {
    Node* tree = buildTree();
    cout << "\npost traversal: ";
    postorder(tree);
}
