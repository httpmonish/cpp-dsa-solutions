/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> visitedNodes;

        // Store all nodes from the first list
        ListNode* temp = headA;
        while (temp != nullptr) {
            visitedNodes.insert(temp);
            temp = temp->next;
        }

        // Traverse the second list and find the first common node
        temp = headB;
        while (temp != nullptr) {
            if (visitedNodes.find(temp) != visitedNodes.end()) {
                return temp;
            }
            temp = temp->next;
        }

        return nullptr;
    }
};