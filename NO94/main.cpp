#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0),left(NULL),right(NULL){}
    TreeNode(int x):val(x),left(NULL),right(NULL){}
    TreeNode(int x,TreeNode* left,TreeNode* right):val(x),left(left),right(right){}
};
class Solution {
public:
    //1.递归遍历
    /*void traversal(TreeNode* cur,vector<int>& vec){
        if(cur==NULL) return;
        traversal(cur->left,vec);
        vec.push_back(cur->val);
        traversal(cur->right,vec);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(root,res);
        return res;
    }*/
    //2.非递归遍历
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* cur=root;
        while(cur!= NULL ||!s.empty()){
            if(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }else{
                cur=s.top();
                s.pop();
                result.push_back(cur->val);
                cur=cur->right;
            }
        }
        return result;
    }


};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

