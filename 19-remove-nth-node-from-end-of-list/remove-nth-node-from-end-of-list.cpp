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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;

        // Pass 1: Find the length of the list
        while (temp != nullptr) {
            cnt++;
            temp = temp->next;
        }

        // Edge case: Remove the head node
        if (cnt == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Pass 2: Traverse to the node before the one to delete
        int res = cnt - n;
        temp = head;

        while (temp != nullptr) {
            res--;

            if (res == 0) {
                break;
            }

            temp = temp->next;
        }

        // Delete the nth node from the end
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;

        return head;
    }
};