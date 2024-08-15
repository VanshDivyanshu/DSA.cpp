#include<bits/stdc++.h>
using namespace std;
int isArmstrongNumber(int n){
    // Calculating the number of digits
    int digit = log10(n) + 1;
    
    // taking temporary variable to check
    // in last whether the given number is armstrong or not
    int temp = n;
    int sum = 0;
    
    while(n>0){
        // getting the digit of a number n
        int lastDigit = n % 10;
        n/=10;
        // adding the digit raised to number of digits in the sum variable
        sum += pow(lastDigit, digit);
    }
    
    // return true if sum and temp are equal
    // otherwise return false
    return temp == sum;
}
int main(){
    int n = 153;
    if(isArmstrongNumber(n))
        cout << n << " is an armstrong number" << endl;
    else
        cout << n << " is not an armstrong number" << endl;
}