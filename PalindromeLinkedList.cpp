/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<vector>
class Solution {
    private:
    bool checkPalindrome(vector<int>arr)
    {
        int s=0;
        int e=arr.size()-1;
        while(s<=e)
        {
            if(arr[s]!=arr[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp= head;
        vector<int>arr;
        while(temp!=NULL)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        return checkPalindrome(arr);
        
    }
};
