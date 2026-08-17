class Solution {
private:
    void findCombination(int ind, int target, vector<int>& candidates,
                          vector<vector<int>>& ans, vector<int>& ds) {
        
        // Base case
        if (ind == candidates.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Pick
        if (candidates[ind] <= target) {
            ds.push_back(candidates[ind]);

            // Stay at the same index because we can reuse the element
            findCombination(ind, target - candidates[ind],
                            candidates, ans, ds);

            ds.pop_back();
        }

        // Not pick
        findCombination(ind + 1, target,
                         candidates, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        findCombination(0, target, candidates, ans, ds);

        return ans;
    }
};
