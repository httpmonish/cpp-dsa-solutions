#include<iostream>
using namespace std;

//global variable
int a = 5;

int main(){
    //local variable 
    int a = 6;
    //cout<<a<endl;
    {
        //block-scope variable
        int a = 7;
        cout<< a << endl;
    }
    return 0;

}