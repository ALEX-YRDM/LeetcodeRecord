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
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
            : val(_val), left(_left), right(_right), next(_next) {}
};
class Solution {
public:
    Node* connect(Node* root) {
        /*vector<vector<Node*>> vec;
        queue<Node*> queue;
        if(root!=NULL){
            queue.push(root);
            while(!queue.empty()){
                int size=queue.size();
                vector<Node*> v;
                for(int i=1;i<=size;i++){
                    Node* p=queue.front();
                    v.push_back(p);
                    queue.pop();
                    if(p->left) queue.push(p->left);
                    if(p->right) queue.push(p->right);
                }
                vec.push_back(v);
            }
        }
        for(auto i:vec){
            for(int j=1;j<i.size();j++){
                i[j-1]->next=i[j];
            }
        }
        return root;*/
        queue<Node*> que;
        if (root != NULL) que.push(root);
        while (!que.empty()) {
            int size = que.size();
            // vector<int> vec;
            Node* nodePre;
            Node* node;
            for (int i = 0; i < size; i++) {
                if (i == 0) {
                    nodePre = que.front(); // 取出一层的头结点
                    que.pop();
                    node = nodePre;
                } else {
                    node = que.front();
                    que.pop();
                    nodePre->next = node; // 本层前一个节点next指向本节点
                    nodePre = nodePre->next;
                }
                if (node->left) que.push(node->left);
                if (node->right) que.push(node->right);
            }
            nodePre->next = NULL; // 本层最后一个节点指向NULL
        }
        return root;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
