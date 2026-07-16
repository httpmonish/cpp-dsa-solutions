#include<bits/stdc++.h>
using namespace std;

//    *
//   **
//  ***
// ****
//*****

void pattern11(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(int space=1;space<=n-i;space++){
			cout<<" ";
		}
		for(int star=1;star<=i;star++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern11(N);
}
