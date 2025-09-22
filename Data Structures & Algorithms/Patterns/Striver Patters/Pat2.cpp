#include<bits/stdc++.h>
using namespace std;
// 
// *
// * *
// * * *
// * * * *
// * * * * *


void pattern2(int n){
	int i,j;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern2(N);
}
