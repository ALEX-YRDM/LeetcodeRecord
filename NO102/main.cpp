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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> queue;
        if(root!=NULL){
            queue.push(root);
            while(!queue.empty()){
                int size=queue.size();
                vector<int> v;
                for(int j=1;j<=size;j++){
                    TreeNode* p=queue.front();
                    v.push_back(p->val);
                    queue.pop();
                    if(p->left) queue.push(p->left);
                    if(p->right) queue.push(p->right);
                }
                res.push_back(v);
            }
        }
        return res;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
