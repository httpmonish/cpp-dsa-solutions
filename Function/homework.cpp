#include<iostream>
#include<cmath>
using namespace std;

int printing(){
    for(int i=1; i<=100; i++ ){
        cout<<i<<endl;
    }
    return 0;
}

int simpleinterest(int principal, int rate, int duration){
    int interest = (principal*rate*duration)/100;
    return interest;
}

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    
    // simple loop to check divisibility
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;  // if divisible, not prime
        }
    }
    return true;
 } // if no divisor found, it’s prime

int eligibleOrNot(int age) {
    if (age >= 18) {
        return 1;   // eligible
    } else {
        return 0;   // not eligible
    }
}
//SIP Calculator

double calculateSIP(double P, double annualRate, int years) { 
    // 4) function return type 'double' -- function will return a decimal number (maturity value)
    // 5) parameters:
    //    - double P         : monthly investment (use double so fractions like 2500.50 are allowed)
    //    - double annualRate: annual interest rate in percent (e.g., 12.5)
    //    - int years        : number of whole years

    // Convert annual rate to monthly decimal rate
    double r = annualRate / 12 / 100;   // 6) /12 converts annual→monthly, /100 converts percent→decimal (e.g., 12 → 0.12 → 0.01 per month)
    
    // Total number of months
    int n = years * 12;                 // 7) years→months (e.g., 10 years = 120 months)
    
    // Apply SIP formula:
    // FV = P * [((1+r)^n - 1) / r] * (1+r)
    double FV = P * ((pow(1 + r, n) - 1) / r) * (1 + r);
    // 8) pow(1 + r, n) computes (1+r)^n
    // 9) (pow(1+r, n) - 1) gives growth due to compounding over n months
    // 10) divide by r converts the series sum to a factor for monthly deposits
    // 11) multiply by (1+r) accounts for the extra month of compounding on the last deposit
    // 12) multiply by P scales it by your monthly installment → final maturity value
    
    return FV;                          // 13) return the calculated maturity value to the caller
}



int main(){ 
    // printing();

    // Simple interest
    // int p, r, t;
    // cout << "Enter Principal: ";
    // cin >> p;
    // cout << "Enter Rate of Interest: ";
    // cin >> r;
    // cout << "Enter Time (in years): ";
    // cin >> t;
    // int interest = simpleinterest(p, r, t);
    // cout << "Simple Interest: " << interest << endl;

    
    // cout << "Prime numbers from 1 to 100 are: " << endl;

    // for (int i = 1; i <= 100; i++) {
    //     if (isPrime(i)) {
    //         cout << i << " ";
    //     }
    // }

    // int person;
    // cout << "Enter age: ";
    // cin >> person;

    // int result = eligibleOrNot(person);

    // if (result == 1) {
    //     cout << "You are eligible!" << endl;
    // } else {
    //     cout << "You are not eligible!" << endl;
    // }

    //SIP Calculator
   
    double monthlyInvestment, annualRate; // 15) local variables to store user input (use double for decimals)
    int years;                            // 16) years is an integer (no fractional years expected here)

    cout << "Enter Monthly Investment (P): "; // 17) print prompt to user (<< is insertion operator)
    cin  >> monthlyInvestment;                // 18) read monthlyInvestment from keyboard (>> is extraction operator)

    cout << "Enter Annual Interest Rate (%): "; // 19) prompt for annual rate (in percent)
    cin  >> annualRate;                         // 20) read annualRate

    cout << "Enter Number of Years: ";         // 21) prompt for duration
    cin  >> years;                             // 22) read years

    // 23) Call calculateSIP with the user inputs (these three are the ARGUMENTS)
    double maturityValue = calculateSIP(monthlyInvestment, annualRate, years);

    // 24) Output the final result. endl inserts newline and flushes the output buffer.
    cout << "\nMaturity Value after " << years << " years = " << maturityValue << endl;


   return 0;
}