#include<bits/stdc++.h>
using namespace std;
// 
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1 


void pattern7(int n){
	int i,j;
	int val=1;
	for(int i=1;i<=n;i++){
		int val= i%2==0 ? 0:1;
		for(int j=1;j<=i;j++){
			cout<<val;
			val=!val;
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern7(N);
}
