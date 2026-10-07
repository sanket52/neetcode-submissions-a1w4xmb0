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
class Solution {
public:
    int pairSum(ListNode* head) {
        
        ListNode * slow=head;
        ListNode * fast=head;

        while(fast!=NULL  && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode * prev=NULL;
        ListNode * curr=slow;

        while(curr)
        {
            ListNode * temp=curr->next;
            curr->next=prev;

            prev=curr;
            curr=temp;
        }

        ListNode * first=head;
        ListNode * sec=prev;
        int ans=0;

        while(sec!=NULL)
        {
            int sum=first->val+sec->val;

            ans=max(ans,sum);

            first=first->next;
            sec=sec->next;

        }

return ans;

    }
};