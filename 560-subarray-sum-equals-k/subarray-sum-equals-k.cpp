class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1; // Prefix sum 0 occurs once initially

        int preSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            preSum += nums[i];

            int remove = preSum - k;

            // Add the number of times (preSum - k) has occurred
            count += mpp[remove];

            // Store the current prefix sum
            mpp[preSum]++;
        }

        return count;
    }
};