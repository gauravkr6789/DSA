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

vector<vector<int>>zigzag(Node* root) {
    vector<vector<int>>res;
    if(!root) return res;
    queue<Node*>que;
    que.push(root);
    bool leftToright=true;
    while(!que.empty()){
        int size=que.size();
        vector<int>level(size);
        for(int i=0;i<size;i++){
            Node*curr=que.front();
            que.pop();
            int index=leftToright ? i:(size-1-i);
            level[index]=curr->data;
            if(curr->left){
                que.push(curr->left);
            }
            if(curr->right){
                que.push(curr->right);
            }
        }
        res.push_back(level);
        leftToright != leftToright;
    }
    return res;  
}

int main() {
    Node* tree = buildTree();
    cout << "\nlevelorder traversal: ";
    zigzag(tree);
}
