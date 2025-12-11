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

vector<int> verticalTraversal(Node* root) {
    map<int, map<int, vector<int>>> nodes;
    queue<pair<Node*, pair<int, int>>> q;
    vector<int> ans;

    if (!root) return ans;

    q.push({root, {0, 0}});

    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        Node* node = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        
        cout << "[DEBUG] Node: " << node->data
             << " | HD: " << hd
             << " | Level: " << lvl << endl;

        nodes[hd][lvl].push_back(node->data);

        if (node->left)
            q.push({node->left, {hd - 1, lvl + 1}});
        if (node->right)
            q.push({node->right, {hd + 1, lvl + 1}});
    }

    
    for (auto &col : nodes) {
        for (auto &row : col.second) {
            for (auto &val : row.second) {
                ans.push_back(val);
            }
        }
    }
    return ans;
}

int main() {
    cout << "Enter tree data in preorder (-1 for NULL): " << endl;

    
    Node* root = buildTree();

    cout << "\n Debug Information:\n";
    
    vector<int> result = verticalTraversal(root);

    cout << "\n Vertical Traversal Output: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
