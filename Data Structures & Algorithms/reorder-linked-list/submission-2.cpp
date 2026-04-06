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
        ListNode* fast=head;
        ListNode * prev=NULL;


        while(fast  && fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(prev)
        {
            prev->next=NULL;
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


    void mergeList(ListNode * l1,ListNode * l2)
    {
            while(l1  && l2 )
            {
                ListNode * t1=l1->next;
                ListNode * t2=l2->next;

                l1->next=l2;
                  if (!t1)        
                   break;
                l2->next=t1;



                l1=t1;
                l2=t2;
            }
    }



    void reorderList(ListNode* head) {
        
        if(!head  || !head->next)  return ;
        ListNode *mid=middle(head);

        ListNode *second=reverse(mid);

        mergeList(head,second);
    }
};
