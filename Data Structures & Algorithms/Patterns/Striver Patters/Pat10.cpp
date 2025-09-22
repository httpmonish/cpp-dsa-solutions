#include<bits/stdc++.h>
using namespace std;
//*
//**
//***
//****
//*****
//****
//***
//**
//*


void pattern10(int n){
	int i,j;
	for(int i=1;i<=n*2-1;i++){
		int row_change=i>n?n*2-i:i;
		for(int j=1;j<=row_change;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"Enter then number";
	int N;
	cin>>N;
	pattern10(N);
}
