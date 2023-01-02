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
    void traversal(TreeNode* cur,vector<int>& path,vector<vector<int>>& result,int targetSum ){
        path.push_back(cur->val);
        if(cur->left==NULL&&cur->right==NULL){
            int sum=0;
            for(auto i:path){ sum+=i;}
            if(sum==targetSum) result.push_back(path);
            return;
        }
        if(cur->left){
            traversal(cur->left,path,result,targetSum);
            path.pop_back();
        }
        if(cur->right){
            traversal(cur->right,path,result,targetSum);
            path.pop_back();
        }

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> result;
        if(root!=NULL){traversal(root,path,result,targetSum);}
        return result;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
