#include<iostream>
#include<math.h>
using namespace std;


// int decimaltobinary(int n){
//     //Divison Method
//     while(n>0){
//         int bit = n % 2;
//         cout<<bit<<endl;
//         n = n / 2;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cout<<"Enter the number to convert to binary: "<<endl;
//     cin>>n;
//     int binary = decimaltobinary(n);
// }

// NOW CONVERT THAT BINARY INTO DECIMAL AND STORING IN INTEGER 


// int decimaltobinary(int n){
//     //Divison Method
//     int binaryno = 0;
//     int i =0;
//     while(n>0){
//         int bit = n % 2;
//             binaryno = bit*pow(10, i++) + binaryno;
//         n = n / 2;
//     }
//     return binaryno;
// }

// int main(){
//     int n;
//     cout<<"Enter the number to convert to binary: "<<endl;
//     cin>>n;
//     int binary = decimaltobinary(n);
//     cout<<binary<<endl;
// }



//BIT-WISE MTHOD




// int decimaltobinary2(int n){
//     //BIT-WISE Method
//     int binaryno = 0;
//     int i =0;
//     while(n>0){
//         int bit = (n & 1);
//             binaryno = bit*pow(10, i++) + binaryno;
//         n = n >> 1;
//     }
//     return binaryno;
// }


//BINARY TO DECIMAL (DIVISION METHOD)


// int binaryTodecimal(int n){
//     int decimal = 0;
//     int i = 0;
//     while(n){
//         int bit = n % 10;
//         decimal = decimal + bit * pow(2, i++);
//         n /=10;
//     }
//     return decimal;
// }


//BINARY TO DECIMAL (BIT-wise METHOD)



int binaryToDecimal2(int n){
    int decimal = 0, power = 1;

    while (n > 0) {
        int lastDigit = n % 10;   // take last digit (0 or 1)
        if (lastDigit == 1) {
            decimal |= power;     // set the bit using OR
        }
        power <<= 1;              // shift power to next bit
        n /= 10;                  // remove last digit
    }
    return decimal;
}



int main(){
    // //THIS MAIN WRITTEN FOR DECIMAL TO BINARY 
    // int n;
    // cout<<"Enter the number to convert to binary: "<<endl;
    // cin>>n;
    // int binary = decimaltobinary2(n);
    // cout<<binary<<endl;


    // // THIS MAIN WRITTEN FOR BINARY TO DECIMAL(DIVSION METHOD)
    //    int binaryno;
    //    cin>>binaryno;
    //    cout<<binaryTodecimal(binaryno)<<endl; 






    // THIS MAIN WRITTEN FOR BINARY TO DECIMAL(BINARY METHOD )

    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Decimal value: " << binaryToDecimal2(n) << endl;
    return 0;


}