class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* p = headA;
        ListNode* q = headB;
        while (p != q) {
            if (p == nullptr){
                p = headB;
            }
            else{
                p = p->next;
            }
            if (q == nullptr){
                q = headA;
            }
            else{
                q = q->next;
            }
        }
        return p;
    }
};