#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;

void printDouble(int a){
    cout<< 2*a << " ";

}

bool checkEven(int a){
    return a%2 == 0; 
}

int main(){
    // vector<int> arr(6);
    // arr[0] =11;
    // arr[1] =13;
    // arr[2] =78;
    // arr[3] =16;
    // arr[4] =12;
    // arr[5] =15;

    //for printing the double value
    // for_each(arr.begin(), arr.end(), printDouble);
    

    //searching for thr target element
    // int target = 40;
    // find(arr.begin(), arr.end(), target);
    
     
    //finding target using iterator
    // int target = 400;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout<< *it << endl;

    // Find_if

    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout<< *it << endl;

    // Target using the count
    // int target = 11;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout<<ans<<endl;
     
    //checking the Even No.
    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout<< ans << endl;

    //Sorting the element of vector 
    // sort(arr.begin(), arr.end());

    // for(int a: arr){
    //     cout<< a << " ";
    // }
    // cout<<endl;

    // //Now printing via Reversing the element

    // reverse(arr.begin(), arr.end());
    // for(int a:arr) {
    //     cout<<a<<" ";
    // }



    // rotating an array
    //   cout << "Before: " << endl;
    //   for (int a : arr) {
    //     cout << a << " ";
    //   }
    //  cout << endl;

    //   // Rotate first 3 elements to the back
    //   rotate(arr.begin(), arr.begin() + 3, arr.end());

    //  cout << "After: " << endl;
    //  for (int a : arr) {
    //      cout << a << " ";
    //  }
    //  cout << endl;



     //unique
    //what does this code and speacial future of unique does is this that when a similar element is same accross next to each other then this this algo prints only one time to this element 
    // auto it = unique(arr.begin(), arr.end());
    // arr.erase(it, arr.end());
    // for(int a: arr){
    //     cout<< a<< " "; 
    // }

    //partition
    // auto it = partition(arr.begin(), arr.end(), checkEven);

    // for(int a: arr){
    //     cout<<a <<" ";
    // }


    //Numeric Algorithm
     vector<int> arr(5);
    arr[0] =11;
    arr[1] =13;
    arr[2] =78;
    arr[3] =16;
    arr[4] =12;
    


     return 0 ;


    


     



}