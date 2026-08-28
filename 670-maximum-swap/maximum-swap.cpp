class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();

        // last[i] = last position where digit i occurs
        vector<int> last(10, -1);
        for (int i = 0; i < n; ++i) {
            last[s[i] - '0'] = i;
        }

        // Try to replace each digit with the largest possible digit
        // appearing later in the number.
        for (int i = 0; i < n; ++i) {
            for (int d = 9; d > s[i] - '0'; --d) {
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return stoi(s);
                }
            }
        }

        return num;
    }
};
