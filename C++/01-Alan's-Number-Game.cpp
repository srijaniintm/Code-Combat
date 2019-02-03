#include <iostream>
using namespace std;
#include <stdio.h>
int main(){
    long long int n,temp,rev=0,rem=0;
    cin>>n; //taking input
    temp = n; //Storing number in temporary variable 
    while(temp!=0){ //Reversing the Number
        rem = temp%10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    cout<<n+rev; //Printing output by adding original number with its reverse
    return 0;
}
