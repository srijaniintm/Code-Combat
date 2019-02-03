#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    int n;
    cin>>n;
    while(n>0){
        char string[10000];
        int count;
        long long int prod = 1;
        
        cin>>string;        // intaking string input
        
        for (count = 0; string[count]!='\0'; count++)         //traversing the string
        {
            if ((string[count] >= '0') && (string[count] <= '9'))     //checking for digit
            {
                prod *= (string[count] - '0');          //multiplying the digits
            }
        }
        cout<<prod<<endl;
        n--;
    }
    return 0;
}
