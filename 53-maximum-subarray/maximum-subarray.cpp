
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = nums[0];   // CORRECTED

        for(int i = 0; i < nums.size(); i++) {   // CORRECTED
            sum += nums[i];

            maxSum = max(maxSum, sum);

            if(sum < 0) {   // CORRECTED
                sum = 0;
            }
        }

        return maxSum;   // CORRECTED
    }
};

