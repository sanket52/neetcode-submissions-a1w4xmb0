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
    int gcd(int a,int b)
    {
        if(b==0) return a;

        return gcd(b,a%b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        if(!head)  return NULL;
        ListNode * curr=head;
        
        while(curr->next)
        {
            int n1=curr->val;
            int n2=curr->next->val;

            int gcdValue=gcd(n1,n2);

            ListNode * newNode=new ListNode(gcdValue,curr->next);
            curr->next=newNode;
            curr=newNode->next;

        }
        return head;


    }
};