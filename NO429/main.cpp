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
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        queue<Node*> queue;
        if(root!=NULL){
            queue.push(root);
            while(!queue.empty()){
                int size=queue.size();
                vector<int> v;
                for(int i=1;i<=size;i++){
                    Node *p=queue.front();
                    v.push_back(p->val);
                    queue.pop();
                    for(auto i:p->children){
                        if(i!=NULL) queue.push(i);
                    }
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
