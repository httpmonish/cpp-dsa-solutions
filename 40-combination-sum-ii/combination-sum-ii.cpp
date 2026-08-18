class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<int>& current,
               vector<vector<int>>& result, int idx) {
        
        if (target == 0) {
            result.push_back(current);
            return;
        }

        if (target < 0) {
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            // Skip duplicates at the same recursion level
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }

            current.push_back(candidates[i]);

            // Each element can be used only once
            solve(candidates, target - candidates[i],
                  current, result, i + 1);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;

        // Sort so duplicates are adjacent
        sort(candidates.begin(), candidates.end());

        solve(candidates, target, current, result, 0);

        return result;
    }
};