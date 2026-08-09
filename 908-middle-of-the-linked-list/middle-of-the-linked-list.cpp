class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Step 1: Count the total number of nodes (Pass 1)
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // Step 2: Calculate target middle index
        int midNode = (count / 2) + 1;

        // Step 3: Traverse to the middle node (Pass 2)
        temp = head;
        while (temp != nullptr) {
            midNode = midNode - 1;
            if (midNode == 0) {
                break;
            }
            temp = temp->next;
        }
        return temp;
    }
};