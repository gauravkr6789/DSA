#include <iostream>
using namespace std;

int diameterans = 0;

class Node {
public:
    int data;
    Node* left;
    Node* right;

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

int heightOfTree(Node* root) {
    if (root == NULL) return 0;

    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);

    diameterans = max(diameterans, leftHeight + rightHeight + 1);

    return max(leftHeight, rightHeight) + 1;
}

int Diameter(Node* root) {
    diameterans = 0; 
    heightOfTree(root);
    return diameterans; 
}

int main() {
    Node* tree = buildTree();
    int ans = Diameter(tree);
    cout << "Diameter of tree (in nodes): " << ans << endl;
}


