#include <iostream>
#include <queue>
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

void levelorder(Node* root) {
    if(!root) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node*curr=q.front();
        q.pop();
        cout<<curr->data;
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }

    
    
}

int main() {
    Node* tree = buildTree();
    cout << "\nlevelorder traversal: ";
    levelorder(tree);
}
