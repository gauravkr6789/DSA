#include <iostream>
#include <queue>
#include<vector>
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
bool isleaf(Node* root) {
        return (root->left == NULL && root->right == NULL);
    }

    // Collect left boundary (excluding leaf nodes)
    void collectleftNode(Node* root, vector<int>& result) {
        if (!root || isleaf(root)) return;

        result.push_back(root->data);

        if (root->left)
            collectleftNode(root->left, result);
        else
            collectleftNode(root->right, result);
    }

    // Collect right boundary (excluding leaf nodes)
    void collectrightNode(Node* root, vector<int>& result) {
        if (!root || isleaf(root)) return;

        if (root->right)
            collectrightNode(root->right, result);
        else
            collectrightNode(root->left, result);

        result.push_back(root->data);  // reverse order
    }

    // Collect all leaf nodes
    void collectleafNode(Node* root, vector<int>& result) {
        if (!root) return;

        if (isleaf(root)) {
            result.push_back(root->data);
            return;
        }

        collectleafNode(root->left, result);
        collectleafNode(root->right, result);
    }

    // Main boundary traversal
    vector<int> boundaryTraversal(Node *root) {
        vector<int> res;
        if (!root) return res;

        // Add root if not leaf
        if (!isleaf(root))
            res.push_back(root->data);

        // Left boundary
        collectleftNode(root->left, res);

        // Leaf nodes
        collectleafNode(root, res);

        // Right boundary
        collectrightNode(root->right, res);

        return res;
    }
int main() {
    Node* tree = buildTree();
    cout << "\nlevelorder traversal: ";
    boundaryTraversal(tree);
}
