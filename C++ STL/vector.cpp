#include<iostream>
#include<vector>
using namespace std;

void printPairs(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<" ( "<< arr[i] <<" , "<<arr[j] <<" ), ";
        }
    }
}

void printAlltriplets(vector<int> arr){
    int n = arr.size();

    for(int i = 0; i<n; i++){
        for(int j =i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                cout<<" ("<<arr[i] <<" , "<<arr[j] <<" , "<<arr[k]<<" ), ";
            }
        }
    }
}

int main(){

    //Printing Pairs
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // printPairs(arr);
    printAlltriplets(arr);

    // //Creating a 2D Vector
    // vector<vector<int>> arr(5, vector<int>(4,0)); //2D Array created with 5 rows and 4 columns with initial cell of each cell as 0
    // int totalRows = arr.size();     
    // int totalColumns = arr[0].size(); 
    
    // //Jagged Array
    // vector<vector<int>>brr(4);

    // brr[0]= vector<int>(5);
    // brr[0]= vector<int>(2);
    // brr[0]= vector<int>(3);
    // brr[0]= vector<int>(6);

    // int totalRowCount = brr.size();




    //swap
    // vector<int> first;
    // vector<int> second;

    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    // second.push_back(100);  
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);



    //creating a vector 
    // vector<int>::iterator it  = first.begin();

    // while(it != first.end()) {
    //     cout<< *it << endl;
    //     it++;
    // }


   //SWAP
    // first.swap(second);

    // //first Method

    // cout<< first[0] <<" "<< first[1] <<" " << first[2] <<" "<< first[3]<<" " <<endl;

    // //second method
    // for(int i:first){
    //     cout<< i << " ";
    // }
    // for(int i:second){
    //     cout<< i << " ";
    // }
    



    //creation
    // vector<int> marks;
    // marks.reserve(10); // reverse 10 size in vector[array]
    // cout<< *(marks.begin()) <<endl; //printing a begin element
    // marks.push_back(10); 
    // marks.push_back(20); 
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(50);

    // marks.insert(marks.begin(),50);
    // cout<< marks[0] << endl;

    // marks.erase(marks.begin(), marks.end());
    // cout<< marks.size() << endl;


    // marks.clear();// remove all the element from vector

    // cout<< marks.max_size() << endl; // max size
    
    // cout<< marks.size() << endl;
    // cout<< marks.capacity() <<endl;
      

    
    // cout << marks[0] << endl; //value can access and print as well using operator[ ]
    // cout << marks.at(0) << endl; //value can access and print as well using .at()

    // //empty()
    // cout<< "Size: " << marks.size() << endl;
    // if(marks.empty() == true){
    //     cout<< "Vector is empty" << endl;
    // }
    // else{
    //     cout<<"Vector is not empty"<< endl;
    // }
    
    
    // cout << "Size: " << marks.size() << endl;
    // //40 will remove 
    // marks.pop_back(); //remove the last element
    // cout << "Size: " << marks.size() << endl;
    // cout<<"Size: " <<marks.front()<< endl; //accesses the first element in the vector 
    // cout<<"Size: " <<marks.back()<< endl; // accessess the last element in the vector 

    // vector<int> miles(10);

    // vector<int> distance(10,0); //you create a array called distace with 10 size and stores all element to 0 

    // //begin()

    
}
