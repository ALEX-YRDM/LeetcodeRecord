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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> queue;
        if(root!=NULL){
            queue.push(root);
            while(!queue.empty()){
                int size=queue.size();
                int MAX=INT_MIN;
                for(int j=1;j<=size;j++){
                    TreeNode* p=queue.front();
                    queue.pop();
                    MAX=max(MAX,p->val);
                    if(p->left) queue.push(p->left);
                    if(p->right) queue.push(p->right);
                }
                res.push_back(MAX);
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
