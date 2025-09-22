#include<bits/stdc++.h>
using namespace std;
//A
//AB
//ABC
//ABCD
//ABCDE


void pattern13(int n){
	int i,j;
	for(int i=1;i<=n;i++){
		for(char ch='A';ch<'A'+i;ch++){
			cout<<ch;
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern13(N);
}
