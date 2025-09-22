#include<iostream>
using namespace std;



int sum(int a, int b){
    int totalSum = a + b;
    return totalSum;
}


void printMyName(){
    for(int i=1; i<=10; i++){
    cout<<"Monish Bashar Nawaz"<<endl; 
        }
}


int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}


void printMultiples(int num){
    for(int i=1; i<=10; i++){
        cout<<num * i<<endl;
    }
    return;
}


int convertIntoCelcius(int far){
    int celcuius = (far-32)*5/9;
    return celcuius;
}


char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}


int main(){
    //    cout<< "HI"<< endl;;
    //    int ans = sum(5,10);
    //    cout<<ans<<endl;

    //Function Call
    // printMyName();

    int muliplicationAns = getMultiplication(5,4,3); //(arguments)
    cout<< muliplicationAns << endl;
      //Printing Name
    printMyName();
       //print Multiples
       int x =5;
       printMultiples(x);

       //tempreature(conversion)
       int far = 35;
       int ans = convertIntoCelcius(far);
       cout<<"IN Celecius: "<<ans<<endl;
       //charachter 
       char result = convertIntoUpperCase('a');
       cout<<result<<endl;

    return 0;
}