class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Initialize a 2D vector to store the rows of Pascal's Triangle
        vector<vector<int>> result(numRows);
        
        for (int i = 0; i < numRows; i++) {
            // Every i-th row has i + 1 elements, initialized to 1
            result[i] = vector<int>(i + 1, 1);
            
            // Fill in the middle elements using the sum of the row above
            // We start from index 1 and stop before the last element (index i)
            for (int j = 1; j < i; j++) {
                result[i][j] = result[i-1][j] + result[i-1][j-1];
            }
        }
        
        return result;
    }
};