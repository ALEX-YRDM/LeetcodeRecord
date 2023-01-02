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
    int minDepth(TreeNode* root) {
        int depth=0;
        int flag=0;
        queue<TreeNode*> queue;
        if(root!=NULL){
            queue.push(root);
            depth++;
            while(!queue.empty()){
                int size=queue.size();
                for(int j=1;j<=size;j++){
                    TreeNode* p=queue.front();
                    queue.pop();
                    if(p->left) queue.push(p->left);
                    if(p->right) queue.push(p->right);
                    if(p->left==NULL&&p->right==NULL) flag=1;
                }
                if(flag==1) break;
                depth++;
            }
        }
        return depth;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
