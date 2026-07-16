#include<iostream>
using namespace std;

int main(){
    //Implicit Casting
    //1. int to float   

    // int num1 = 10;
    // float num2 = 5.5;
    // //you can use both int or float in result as per requirement 
    // float result = num1 + num2; //Implicit conversion of num1 from int to float
    // cout<< result << endl;

    // //2. Char to int

    // char ch = 'A';
    // //you can use both int or char in result as per requirement
    // char a = ch + 1; //Implicit conversion from char to int 
    // cout<<a<<endl;

    // //3. Int to Char

    // int a = 98;
    // char ch = a;
    // cout<<ch<<endl;



    //Explicit Casting

    //1.Duoble to int
    double pi = 3.14159265;
    int intPi = (int)pi; //Explicit conversion from double to int 
    cout<<intPi<<endl;

    //2. Float to Char
    float floatingnumber = 65.35;
    char charValue = (char)floatingnumber;//Explicit conversion from float to char
    cout<<charValue<<endl;

    //3.Int to float
    int a = 10;
    int b = 3.0;
    float c = a/((float)b);//Explicit conversion from int to float
    cout<<c<<endl;




}
