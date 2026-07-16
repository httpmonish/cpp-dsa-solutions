#include<iostream>
#include<stack>

using namespace std;

int main(){
    //creation
    stack<int> st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    cout <<st.size()<< endl;

    st.pop();
    //10,20
    cout <<st.size()<< endl;
    cout <<st.top()<< endl;

    if(st.empty() == true){
        cout<< "Stack is empty"<< endl;
    } else{
        cout<<"Stack is non empty"<<endl;
    }

    //there is no such operator in stack






   return 0;
}
   