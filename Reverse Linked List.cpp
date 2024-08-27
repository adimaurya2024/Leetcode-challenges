class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* head2= reverseList(head->next);
        head->next->next= head;
        head->next= NULL;
        return head2;
    }
};
