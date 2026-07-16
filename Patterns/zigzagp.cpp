#include <iostream>
using namespace std;

class Solution {
public:
    void printPattern(int n) {
        int part1 = n;
        int maxSpaces = 2 * n - 1;

        // part1
        for (int row = 1; row < part1; row++) {
            // spaces
            for (int col = 1; col <= row - 1; col++) {
                cout << " ";
            }

            // stars
            cout << "*";
            for (int col = 1; col <= maxSpaces; col++) {
                cout << " ";
            }
            maxSpaces = maxSpaces - 2;
            cout << "*";
            cout << endl;
        }

        // part2
        int part2 = n + 1;
        for (int row = 1; row <= part2; row++) {   // 🔹 FIXED: changed npart2 → part2
            // spaces
            for (int col = 1; col <= part2 - row; col++) {
                cout << " ";
            }

            // stars
            if (row == 1) {   // 🔹 FIXED: changed r → row
                cout << "*";
            }
            else {
                cout << "*";
                for (int col = 1; col <= 2 * row - 3; col++) {
                    cout << " ";
                }
                cout << "*";   // 🔹 FIXED: added missing star at end
            }
            cout << endl;
        }
    }
};
int main() {
    Solution obj;
    obj.printPattern(100);  // 🔹 change number to any size
    return 0;
}
