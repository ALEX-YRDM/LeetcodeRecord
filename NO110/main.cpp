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
    bool isBalanced(TreeNode* root) {
        bool flag=false;
        getdepth(root,flag);
        return !flag;
    }
    int getdepth(TreeNode* node,bool& flag){
        if(flag) return 0;
        if(node==NULL) return 0;
        int left=getdepth(node->left,flag);
        int right= getdepth(node->right,flag);
        if(abs(left-right)>=2) flag=true;
        return 1+max(left,right);
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
