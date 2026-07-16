#include<bits/stdc++.h>
using namespace std;
// 
// * * * * *
// * * * * 
// * * * 
// * * 
// *


void pattern5(int n){                                  
	int i,j;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<*;
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern5(N);
}
