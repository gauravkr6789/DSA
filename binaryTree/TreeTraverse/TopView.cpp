#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>
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

vector<int> TopView(Node* root) {
    vector<int> ans;
    if (!root) return ans;

    map<int, int> topNode; 
    queue<pair<Node*, int>> q; 
    q.push({root, 0});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();
        Node* node = temp.first;
        int hd = temp.second;

        if (topNode.find(hd) == topNode.end()) {
            topNode[hd] = node->data;
        }

        if (node->left) q.push({node->left, hd - 1});
        if (node->right) q.push({node->right, hd + 1});
    }

    for (auto &x : topNode) {
        ans.push_back(x.second);
    }

    return ans;
}


int main() {
    cout << "Enter tree data in preorder (-1 for NULL): " << endl;

    
    Node* root = buildTree();

    cout << "\n Debug Information:\n";
    
    vector<int> result = TopView(root);

    cout << "\n top view  Output: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
