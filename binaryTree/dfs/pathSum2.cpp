#include <iostream>
#include <vector>
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

Node *buildTree()
{
    int data;
    cin >> data;
    if (data == -1)
        return NULL;

    Node *root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void dfs(Node* root, int target, vector<int>& path, vector<vector<int>>& ans)
{
    if (!root) return;

    target -= root->data;
    path.push_back(root->data);

    if (!root->left && !root->right && target == 0)
        ans.push_back(path);

    dfs(root->left, target, path, ans);
    dfs(root->right, target, path, ans);

    path.pop_back();
}

vector<vector<int>> pathSum(Node* root, int targetSum) 
{
    vector<vector<int>> ans;
    vector<int> path;

    dfs(root, targetSum, path, ans);  

    return ans;
}
