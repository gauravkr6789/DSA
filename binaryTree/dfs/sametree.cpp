#include <iostream>
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

bool isSametree(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }
    if (root1 == NULL && root2 != NULL)
    {
        return false;
    }
    if (root1 != NULL && root2 == NULL)
    {
        return false;
    }
    int leftSubtree = isSametree(root1->left, root2->left);
    int rightsubtree = isSametree(root1->right, root2->right);
    if (leftSubtree && rightsubtree && root1->data == root2->data)
    {
        return true;
    }
    else
    {
        return false;
    }
}