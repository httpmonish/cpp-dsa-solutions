#include<iostream>
#include<deque>

using namespace std;

int main (){

    deque<int> dq;


    //insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(40);
    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);
     

    //removal
    dq.pop_front();
    dq.pop_back();

    cout<< dq.size() << endl;
    cout<< dq.front() << endl;
    cout<< dq.back() << endl;

    if(dq.empty() == true) {
        cout<<"Deque is empty"<<endl;

    } else {
        cout<<"Deque is not empty"<<endl;
    }

    //iterator:- Iterator can workj in deque

    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout<< *it<<" ";
        it++;
        
    }
     //printing the elemnet individually
    cout<<dq[0]<<endl;

    cout<<dq.size()<<endl;
    dq.clear();
    cout<<dq.size()<<endl;

    dq.insert(dq.begin(),101);
    cout<<dq[0]<<endl;
    
    dq.erase(dq.begin(),dq.end());


       return 0;
}