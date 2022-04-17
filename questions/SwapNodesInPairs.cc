class Solution {
public:
    ListNode* swapPairs(ListNode* head) 
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode *head2 = head;
        head = head->next;
        head2->next = head->next;
        head->next = head2;
        if(head->next->next && head->next->next->next)
            head2->next = swapPairs(head->next->next);
        return head;    
    }
};
