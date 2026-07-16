//Map :-> 1. Order Map 2. Unorder Map
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//In Unordered Map the time coplexity is Big-oh of O(1)
//In ordered Map the time coplexity is Big-oh of O(logn)

//order map gives all thing in order as a,b,c,d,e....
//and in unodered map it gives in the random 



int main(){
//order map
map<int, string> table;

table.insert(make_pair(1,"Love"));
table.insert(make_pair(2,"Ani"));
table.insert(make_pair(3,"bopes"));



    map<int, string>::iterator it = table.begin(); // Correct type for iterator

    while(it != table.end()) {
        pair<int, string> p = *it;           // Dereference iterator to get key-value pair
        cout << p.first << " " << p.second << endl; // Print key and value
        it++;                                 // Move to next map item
    }

// for (auto p : table) {
//         cout << p.first << " : " << p.second << endl;
//     }


//     //creation
//     unordered_map<string, string> table;
//      //insertion
//      table["in"] = "India";
//      table.insert(make_pair("en", "England"));

//      pair<string,string>p;
//      p.first = "br";
//      p.second = "brazil";
//      table.insert(p);

//      cout<< table.size() << endl;

//      if(table.count("in") == 0){
//         cout<<"Key not Found"<< endl;
//      }
//      if(table.count("in") == 1){
//         cout<<"Key Found" << endl;
//      }





    //   //Find a Element 
    //  if(table.find("in") != table.end()){
    //     cout<<"Key Found"<<endl;
    //  } else{
    //     cout<<"Key Not Found" << endl;
    //  }

    //  table.erase(table.begin(), table.end());
    //  cout<< table.size() << endl;

    // map<string, string>::iterator it = table.begin(); 

    //  while(it != table.end()){
    //     pair<int, string> p = *it;
    //     cout<< p.first << " "<< p.second << endl;
    //     it++;
    //  }
     
    //  cout<< table.size() << endl;
    //  table.clear();
    //  cout<< table.size() << endl;

    //  cout << table["in"] << endl;

    //  table["in"] = "India3";
    //  table.at("in") = "india2";
    //  cout<< table.at("in")<<endl;
     




     // //Chechking via If and else 
    //  if(table.empty() == true){
    //     cout<< " map is empty "<<endl;
    //  } else{
    //     cout<<"map is not empty "<< endl;
    //  }

    return 0;



}
