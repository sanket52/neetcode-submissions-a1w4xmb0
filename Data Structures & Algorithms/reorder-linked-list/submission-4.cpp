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


    void merge(ListNode * first,ListNode * second)
    {

        while(second)
        {
            ListNode * temp1=first->next;
            ListNode * temp2=second->next;

            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }

    }


    void reorderList(ListNode* head) {
        
        if(!head  || !head->next)  return ;

        ListNode *  mid=middle(head);
        // reverse second half

        ListNode *sec=reverse(mid->next);
        // break the list into halves

        mid->next=NULL;

        merge(head,sec);


    }
};
