#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    long int n;
    cin>>n;       //input
    if (n%4==0){            // checking for condition
        cout<<"Lose";
        return 0;
    }
    cout<<"Win";
}
