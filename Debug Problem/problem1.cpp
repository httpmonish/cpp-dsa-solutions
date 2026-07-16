#include<iostream>
#include<cmath>
using namespace std;

// Question

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c || c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c || c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }



// ANSWER - Logic Error ( || -> &&)

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
