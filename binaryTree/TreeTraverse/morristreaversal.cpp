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

void morrisInorder(Node* rootTree){
    Node* CurrNode = rootTree;
    while (CurrNode != NULL) {
        if (CurrNode->left == NULL) {
            cout << CurrNode->data << " "; 
            CurrNode = CurrNode->right;
        } else {
           
            Node* predecessor = CurrNode->left;
            while (predecessor->right != NULL && predecessor->right != CurrNode) {
                predecessor = predecessor->right;
            }

            if (predecessor->right == NULL) {
                predecessor->right = CurrNode;
                CurrNode = CurrNode->left;
            } else {
                predecessor->right = NULL;
                cout << CurrNode->data << " "; 
                CurrNode = CurrNode->right;
            }
        }
    }
}