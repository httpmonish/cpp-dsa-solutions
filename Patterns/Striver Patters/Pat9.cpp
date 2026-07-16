#include<bits/stdc++.h>
using namespace std;
//1
//23
//456
//78910
//1112131415


void pattern9(int n){
	int i,j;
	int val=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<val++;
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern9(N);
}
