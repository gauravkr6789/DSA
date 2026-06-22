#include <iostream>
#include <vector>
#include<unordered_map>
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

vector<vector<int>> vertical(Node *root)
{
    vector<vector<int>> result;
    if (root == NULL)
    {
        return result;
    }


}
