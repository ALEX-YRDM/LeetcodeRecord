//
// Created by alex on 22-9-22.
//

#ifndef NO203_SOLUTION_H
#define NO203_SOLUTION_H
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* new_head=new ListNode(0);
        new_head->next=head;
        ListNode* p=new_head;
        while((p->next)!= nullptr){
            if(p->next->val==val){
                ListNode* q=p->next;
                p->next=q->next;
                delete q;
            }else{
                p=p->next;
            }
        }
        head=new_head->next;
        delete new_head;
        return head;
    }
};


#endif //NO203_SOLUTION_H
