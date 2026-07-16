#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

//function to print twice of the original value

void printTwice(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<(2*arr[i])<<" , ";
    }
}

//function to print Even or odd

void printEvenOdd(int arr[], int size){
    for(int i=0; i<size; i++){
        int number = arr[i];
        if(number%2== 0){
            cout<<"Even ";
        }
        else{
            cout<<"Odd ";
        }
    }
}

//function to print 0 or 1 in the bracket
void countZeroOnes(int arr[], int size){
    int totalZero = 0;
    int totalOne = 0;
    
    for(int i=0; i<size; i++){
        int number = arr[i];

        if(number == 0){
            totalZero++;
        }
        else if(number == 1){
            totalOne++;
        }
    }
    cout<<"Total Zeros: "<<totalZero<<endl;
    cout<<"Total Ones: "<<totalOne<<endl;
}

int main(){
    // int arr[10];
    // int arr[5] = {1,2,3,4,5};
    // int arr[5] = {1,2};
    // int arr[5] = {0};
    // int arr[] = {10,20,23}; 

    // printArray(arr,3 );

    // int arr[5] = {11,23,35,65,77};
    // int size = 5;
    // for(int i = 0; i<size; i++){
    //     cout<<arr[i]<<" , ";
    // }


    // //declare & printing for int 
    // int arr[10];
    // cout<<"Enter the value of n,(n = number of values to take input for)"<<endl;
    // int n;
    // cin>>n;

    // for(int i = 0; i < n; i++){
    //     cout<<"Taking input for index"<< i <<endl;
    //     cin>>arr[i];
    // }
    // cout<<"Printing the array"<< endl;
    // for(int i = 0; i<10; i++){
    //     cout<< arr[i]<<" , ";
    // }
    // cout<<endl;



    //declare & printing for char
    //    char arr[10];
    // cout << "Enter the value of n,(n = number of values to take input for)" << endl;
    // int n;   //  changed from char to int
    // cin >> n;

    // for (int i = 0; i < n; i++) {   //  changed i from char to int
    //     cout << "Taking input for index" << i << endl;
    //     cin >> arr[i];
    // }

    // cout << "Printing the array" << endl;
    // for (int i = 0; i < n; i++) {   //  changed loop limit from 10 to n
    //     cout << arr[i] << " , ";
    // }
    // cout<<endl;



    int arr[10] = {0,1,1,0,0};
    int size = 5;
    //int capacity = 10;

    //function call
    // printArray(arr, size);
    // printTwice(arr, size);
    // printEvenOdd(arr, size);
    countZeroOnes(arr, size);





    
    return 0;
}
