#include <iostream>
#include <vector>
#include <climits>
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

int maxWidthTree(Node *TreeNode)
{
    if(TreeNode == 0){
        return 0;
    }
    queue<pair<Node*,int>>q;
    q.push({TreeNode,0});
    int maxWidth=0;
    while(q.size() > 0){
        int currSize=q.size();
        int startIdx=q.front().second;
        int endIdx=q.back().second;
        maxWidth=max(maxWidth,endIdx-startIdx+1);

        for(int i=0;i<currSize;i++){
           auto curr=q.front();
           q.pop();
           if(curr.first->left){
            q.push({curr.first->left,curr.second*2+1});
           }
           if(curr.first->right){
            q.push({curr.first->right,curr.second*2+2});
           }

        }
    }
    return maxWidth;
}

int main(){
    Node*root=buildTree();
    int result=maxWidthTree(root);
    cout<<"max width :"<<result;
}
