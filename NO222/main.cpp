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
    int countNodes(TreeNode* root) {
        int res=0;
        queue<TreeNode*> queue;
        if(root!=NULL){
            queue.push(root);
            res++;
            while(!queue.empty()){
                int size=queue.size();
                for(int i=1;i<=size;i++) {
                    TreeNode *p = queue.front();
                    queue.pop();
                    if (p->left) {
                        queue.push(p->left);
                        res++;
                    }
                    if(p->right) {
                        queue.push(p->right);
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
