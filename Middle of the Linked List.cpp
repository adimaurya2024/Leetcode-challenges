//Two pointer approach (slow moves to one step while fast moves to two steps at a time) :

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head->next;
        while(fast!=NULL)
        {
            fast= fast->next;
            if(fast!=NULL)
            {
                fast= fast->next;
            }
            slow= slow->next;
        }
        return slow;
    }
};
