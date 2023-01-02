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
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root!=NULL){
            queue<TreeNode*> queue;
            queue.push(root->left);
            queue.push(root->right);
            while(!queue.empty()){
                TreeNode* leftnode=queue.front();
                queue.pop();
                TreeNode* rightnode=queue.front();
                queue.pop();
                if(!leftnode&&!rightnode) continue;
                if(!leftnode ||!rightnode||(leftnode->val!=rightnode->val)) return false;
                queue.push(leftnode->left);
                queue.push(rightnode->right);
                queue.push(leftnode->right);
                queue.push(rightnode->left);
            }
        }
        return true;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
