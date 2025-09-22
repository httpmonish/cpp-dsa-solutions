#include<iostream>
using namespace std;


// 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *



void pattern1(int n){
    int i,j;
    for(int i=0;i<n;i++){          // changed <=n to <n
        for(int j=0;j<n;j++){      // changed <=n to <n
            cout<<"*";
        }
        
        cout<<endl;
    }
}
int main()
{   
    int N;                                     // ✅ declare N
    cout << "Enter the Number Of Stars: ";     // ✅ print message
    cin >> N;                                  // ✅ take input

    pattern1(N);

    return 0;
}
