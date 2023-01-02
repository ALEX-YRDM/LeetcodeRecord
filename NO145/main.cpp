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
    /*void traversal(TreeNode* cur,vector<int>& vec){
        if(cur==NULL) return;
        traversal(cur->left,vec);
        traversal(cur->right,vec);
        vec.push_back(cur->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        traversal(root,res);
        return res;
    }*/
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> result;
        if (root == NULL) return result;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();                       // 中
            st.pop();
            result.push_back(node->val);
            if (node->left) st.push(node->left);             // 左（空节点不入栈）
            if (node->right) st.push(node->right);           // 右（空节点不入栈）
        }
        reverse(result.begin(),result.end());
        return result;
    }


};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

