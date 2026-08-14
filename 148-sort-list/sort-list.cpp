class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        vector<int> arr;
        ListNode* temp = head;

        // Step 1: Collect data into a vector
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Step 2: Sort the vector
        sort(arr.begin(), arr.end());

        // Step 3: Overwrite original list's data
        temp = head;
        int i = 0;

        while (temp != nullptr) {
            temp->val = arr[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};