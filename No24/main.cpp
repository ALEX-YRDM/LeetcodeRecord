#include <iostream>
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        /*if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode* HEAD=new ListNode(0,head);
        ListNode*p,*q,*tmp1,*tmp2;
        p=HEAD;
        q=p->next;
        tmp1=q->next;
        tmp2=tmp1->next;
        while(tmp1!= nullptr)
        {
            p->next=tmp1;
            tmp1->next=q;
            q->next=tmp2;
            p=q;
            q=p->next;
            if(q==NULL) break;
            tmp1=q->next;
            if(tmp1==NULL) break;
            tmp2=tmp1->next;

        }
        head=HEAD->next;
        delete HEAD;
        return head;*/
        ListNode*HEAD=new ListNode(0,head);
        ListNode* cur=HEAD;
        while(cur->next!=NULL&&cur->next->next!=NULL){
            ListNode* p=cur->next;
            ListNode* q=p->next->next;

            cur->next=p->next;
            p->next->next=p;
            p->next=q;
            cur=p;
        }
        head=HEAD->next;
        delete HEAD;
        return head;

    }
};