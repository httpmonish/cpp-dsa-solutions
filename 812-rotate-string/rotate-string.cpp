
class Solution {
public:
    bool rotateString(string s, string goal) {
        int m = s.length();
        int n = goal.length();
        
        // Base case: If lengths are different, s can never match goal
        if (m != n) {
            return false;
        }
        
        // Rotate the string s up to 'm' times and check for a match
        for (int count = 1; count <= m; count++) {
            // Perform 1 left shift
            rotate(s.begin(), s.begin() + 1, s.end());
            
            if (s == goal) {
                return true; // Match found!
            }
        }
        
        return false; // Loop finished without any match
    }
};