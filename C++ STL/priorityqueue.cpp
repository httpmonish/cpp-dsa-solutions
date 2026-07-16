#include<iostream>
#include<queue>
using namespace std;

int main(){

    // //creation

    // priority_queue<int> pq;
    // //max heap -> maximum value -> Highest Priority
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);

    // //maximum value of element will be the highest piority

    // cout<<pq.top()<<endl;

    // pq.pop(); // In this pop the highest element will be pop or remove from the vector 

    // cout<<pq.top()<<endl;

    // //checking with the if case 
    // if(pq.empty() == true){
    //     cout<<"PQ is empty"<<endl;
    // } else{
    //     cout<<"PQ is not empty"<<endl;
    // }

    //min-heap
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(100);
    pq.push(50);
    pq.push(75);

    cout<<pq.top()<< endl;
    pq.pop();
    cout<<pq.top()<<endl;




    return 0;


}