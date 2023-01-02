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
    /*void reverseNode(TreeNode* node){
        if(node!=NULL){
            swap(node->left,node->right);
            reverseNode(node->left);
            reverseNode(node->right);
        }else return;
    }*/
    TreeNode* invertTree(TreeNode* root) {
        //reverseNode(root);
        if(root!=NULL){
            stack<TreeNode*> s;
            s.push(root);
            while(!s.empty()){
                TreeNode* node=s.top();
                s.pop();
                swap(node->left,node->right);
                if(node->right) s.push(node->right);
                if(node->left) s.push(node->left);
            }
        }
        return root;
    }
};
int main() {
    int ____ =12;
    cout<<____;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
