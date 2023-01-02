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
    void traversal(TreeNode* cur,int& sum,vector<int>& sumAll){
        sum+=cur->val;
        if(cur->left==NULL&&cur->right==NULL){
            sumAll.push_back(sum);
            return;
        }
        if(cur->left){
            traversal(cur->left,sum,sumAll);
            sum-=cur->left->val;
        }
        if(cur->right){
            traversal(cur->right,sum,sumAll);
            sum-=cur->right->val;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<int> sumAll;
        if(root!=NULL){
            traversal(root,sum,sumAll);
            if(find(sumAll.begin(),sumAll.end(),targetSum)!=sumAll.end())
                return true;
        }
        return false;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
