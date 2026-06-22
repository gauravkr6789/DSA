#include <iostream>
#include <vector>
#include <queue>
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

vector<int> rightview(Node *root)
{
    vector<int> ans;

    if (root == NULL)
        return ans;

    queue<Node *> que;
    que.push(root);

    while (!que.empty())
    {
        int size = que.size();

        for (int i = 0; i < size; i++)
        {
            Node *frontNode = que.front();
            que.pop();

            if (i == size - 1)
            {
                ans.push_back(frontNode->data);
            }

            if (frontNode->left)
            {
                que.push(frontNode->left);
            }

            if (frontNode->right)
            {
                que.push(frontNode->right);
            }
        }
    }

    return ans;
}

int main()
{
    Node *tree = buildTree();

    vector<int> res = rightview(tree);

    cout << "Right View: ";

    for (auto &i : res)
    {
        cout << i << " ";
    }
}