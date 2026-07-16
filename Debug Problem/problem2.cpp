#include<iostream>
using namespace std;

//Question

/*
Pattern
1
23
345
4567
*/



int main(){
    int n;
    cout<<"enter the number: ";
        cin>>n;
    int i=1;
    while(i<=n){//Outer Loop - (how much rows)
        
        int j = i,count = 1;
        while(count<=i){  //Inner Loop - (How much numbers in rows like 1 2, 1 2 3)
            cout<<j; //shift 1 letter left   
             count = count + 1;   // keep track how many numbers printed in this row (stop when enough).
            j = j + 1;
            
             
            
           
            // count = count + 1;
            
            
        }
        cout<<"\n";
          i = i + 1;
         
        
    }
     return 0;
}