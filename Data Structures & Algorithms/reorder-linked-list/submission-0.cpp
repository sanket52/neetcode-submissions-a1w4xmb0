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
    void reorderList(ListNode* head) {
        
        ListNode * slow=head;
        ListNode * fast=head->next;

        while(fast!=NULL  && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode * sec=slow->next;
        ListNode * prev=slow->next=NULL;

        while(sec!=NULL)
        {
            ListNode * temp=sec->next;
            sec->next=prev;
            prev=sec;
            sec=temp;
        }

        ListNode * first=head;
        sec=prev;

        while(sec!=NULL)
        {
            ListNode * temp1=first->next;
            ListNode * temp2=sec->next;

            first->next=sec;
            sec->next=temp1;
            first=temp1;
            sec=temp2;
        }
    }
};
