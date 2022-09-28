#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}



  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p,*q,*tmp;
        q=NULL;
        p=head;
        while(p) {
            tmp=p->next;
            p->next=q;
            q=p;
            p=tmp;
        }
        return q;


    }
};
