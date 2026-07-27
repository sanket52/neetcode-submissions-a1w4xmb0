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
    ListNode * middle(ListNode * head)
    {
        ListNode * slow=head;
        ListNode * fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        return slow;
    }

    ListNode * reverse(ListNode * head)
    {
        ListNode * curr=head;
        ListNode * prev=NULL;

        while(curr!=NULL)
        {
            ListNode * temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }


    void merge(ListNode * first,ListNode * sec)
    {
        while(sec)
        {
            ListNode * temp1=first->next;
            ListNode * temp2=sec->next;
            first->next=sec;
            sec->next=temp1;
            first=temp1;
            sec=temp2;
        }
    }

    void reorderList(ListNode* head) {
        
        if(!head || !head->next) return ;
        ListNode * mid=middle(head);
        ListNode * sec=reverse(mid->next);
        mid->next=NULL;

        merge(head,sec);

    }
};
