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
    //两趟
//Runtime: 3 ms, faster than 92.24% of C++ online submissions for Remove Nth Node From End of List.
//Memory Usage: 10.6 MB, less than 74.99% of C++ online submissions for Remove Nth Node From End of List.
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//       ListNode* HEAD=new ListNode(0,head);
//       int L= getLength(HEAD);
//       ListNode*p=HEAD;
//       for(int i=0;i<L-n;i++){
//           p=p->next;
//       }
//       ListNode* q=p->next;
//       p->next=p->next->next;
//       delete q;
//       head=HEAD->next;
//       delete HEAD;
//       return head;
//    }
//private:
//    int getLength(ListNode* head){
//        int length=0;
//        ListNode* p=head;
//        while(p->next!=NULL){
//            length++;
//            p=p->next;
//        }
//        return length;
//    }

    //仅需一趟
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* HEAD=new ListNode(0,head);
        ListNode* p=HEAD,*q=HEAD;
        for(int i=1;i<=n;i++){
            q=q->next;
        }
        while(q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        p->next=p->next->next;
        head=HEAD->next;
        delete HEAD;
        return head;
    }
};