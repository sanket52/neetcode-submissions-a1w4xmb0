class Solution {
public:

    ListNode* middle(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* reverse(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    void reorderList(ListNode* head) {

        if(!head || !head->next)
            return;

        // Step 1: Find middle
        ListNode* mid = middle(head);

        // Step 2: Reverse second half
        ListNode* second = reverse(mid->next);

        // Break first half
        mid->next = NULL;

        // Step 3: Merge alternately
        ListNode* first = head;

        while(second)
        {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};