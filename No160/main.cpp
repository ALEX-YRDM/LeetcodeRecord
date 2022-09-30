#include <iostream>
#include<cmath>
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
//Runtime: 120 ms, faster than 19.46% of C++ online submissions for Intersection of Two Linked Lists.
//Memory Usage: 14.6 MB, less than 32.70% of C++ online submissions for Intersection of Two Linked Lists.
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int L1= getLength(headA);
        int L2= getLength(headB);
        ListNode* p=headA,*q=headB;
        if(L1>L2){
            for(int i=1;i<=L1-L2;i++){
                p=p->next;
            }
        }else{
            for(int i=1;i<=L2-L1;i++){
                q=q->next;
            }
        }
        while(p!=q&&p!=NULL){
            p=p->next;
            q=q->next;
        }
        return p;
    }
private:
    int getLength(ListNode* head){
        int length=0;
        ListNode* p=head;
        while(p){
            length++;
            p=p->next;
        }
        return length;
    }
};
