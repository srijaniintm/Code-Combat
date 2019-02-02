#include <stdio.h>
int main(){
    long long int n,temp,rev=0,rem=0;
    scanf("%lld",&n); //taking input
    temp = n; //Storing number in temporary variable 
    while(temp!=0){ //Reversing the Number
        rem = temp%10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    printf("%lld",n+rev); //Printing output by adding original number with its reverse
    return 0;
}
