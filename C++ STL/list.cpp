#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    first.insert(first.begin(),100);

    cout<< first.size()<<endl;
    first.erase(first.begin(), first.end());
    cout<<first.size()<<endl;

    

    // list<int> second;
    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // list<int>::iterator it2 = first.begin();

    
    // while(it2 != first.end()) {
    //     cout<<*it2 <<" ";
    //     it2++;
    // }cout<<endl;

    // first.swap(second);

    // list<int>::iterator it3 = first.begin();

    //     while(it3 != first.end()) {
    //     cout<<*it3 <<" ";
    //     it3++;
    // }cout<<endl;






    
















































    // Creation
    // list<int> myList;
    
    // //insrtion
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // myList.push_back(40);
    
    // myList.push_front(100);
    
    // //remove the element from backside
    // myList.pop_back();
    
    
    // //remove the element from frontside 
    // myList.pop_front();

    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    // myList.push_back(10);

    // cout<<"before removing: "<<endl;
    // list<int>::iterator it = myList.begin();

    // while(it != myList.end()){
    //     cout<< *it <<" ";
    //     it++;
    // } cout<<endl;

    // myList.remove(10);

    // cout<<"after removing"<<endl; 
    // list<int>::iterator it2 = myList.begin();

    // while(it2 != myList.end()) {
    //     cout<<*it2 <<" ";
    //     it2++;
    // }cout<<endl;


    // //used to clear all list and make it to zero 
    // myList.clear();

    // cout<<myList.size()<<endl;

    // if(myList.size() == true){
    //     cout<<"list is empty"<<endl;
    // } else{
    //     cout<<"list is not empty"<<endl;
    // }

    
    


}