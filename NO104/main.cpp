#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        /*int depth=0;
        queue<TreeNode*> queue;
        if(root!=NULL){
            queue.push(root);
            while(!queue.empty()){
                depth++;
                int size=queue.size();
                for(int j=1;j<=size;j++){
                    TreeNode* p=queue.front();
                    queue.pop();
                    if(p->left) queue.push(p->left);
                    if(p->right) queue.push(p->right);
                }
            }
        }
        return depth;*/
        return getdepth(root);

    }
    int getdepth(TreeNode* node){
        if(node==NULL) return 0;
        return 1+max(getdepth(node->left), getdepth(node->right));
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
