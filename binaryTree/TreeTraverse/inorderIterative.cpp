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

void inorder(Node* root) {
    stack<Node*> s;
    Node* curr = root;

    while (curr != NULL || !s.empty()) {
        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";

        curr = curr->right;
    }
}

int main() {
    Node* tree = buildTree();
    cout << "\nInorder traversal: ";
    inorder(tree);
}
