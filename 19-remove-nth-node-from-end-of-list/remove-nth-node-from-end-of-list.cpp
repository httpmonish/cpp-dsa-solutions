class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // Edge case: Remove the head node
        if (fast == nullptr) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Move slow and fast together
        ListNode* slow = head;

        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // Delete the nth node from the end
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;

        return head;
    }
};