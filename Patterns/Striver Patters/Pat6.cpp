#include<bits/stdc++.h>
using namespace std;
// 
// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3 
// 1 2  
// 1


void pattern6(int n){                                  
	int i,j;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j;
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern6(N);
}
