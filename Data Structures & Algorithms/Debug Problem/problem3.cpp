// /*
// Pattern
// N = 4
//    *
//   ***
//  *****
// *******
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number of rows for the pyramid

    int i = 1;  // Row counter
    while (i <= n) {   // Debugged: changed from < n to <= n to include the last row
        int j = i;
        int count = 2 * n - 1 ; // Debugged: changed from 2*n+1 to 2*n-1 to match pyramid width
        int gaps = n - i;      // Debugged: changed from n-i-1 to n-i to align pyramid
        int k = 1;

        // 1️⃣ Print spaces before stars (left padding)
        while (k <= gaps) {    // Debugged: changed < gaps to <= gaps to print exact spaces
            cout << " ";
            k = k + 1;
        }

        // 2️⃣ Print stars for current row
        int m = 1;
        int ch = count - 2 * gaps; // Number of stars = total width - spaces on both sides
        while (m <= ch) {          // Debugged: changed < ch to <= ch for proper number of stars
            cout << "*";
            m = m + 1;
        }

        // 3️⃣ Print spaces after stars (right padding) - optional for symmetry
        k = 1;
        while (k <= gaps) {       // Debugged: changed < gaps to <= gaps
            cout << " ";
            k = k + 1;
        }

        cout << "\n";  // Move to the next row
        i = i + 1;     // Move to next row
    }
}
