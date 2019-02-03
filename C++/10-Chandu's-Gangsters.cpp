#include <iostream>
using namespace std;
#include<stdio.h>
int main(){
    int a[9],i,target,sum=0;
    for(i=0;i<9;i++){
        cin>>a[i]; // Taking Input
        sum += a[i]; // Calculating Sum of Array
    }
    target = sum - 100; // Calculating the target which makes the sum of array greater than 100
    int extraA,extraB; // Variables to store two numbers which makes the sum of array greater than 100
    for(i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(a[i] + a[j] == target){
                extraA = a[i];
                extraB = a[j];
                break;
            }
        }
    }
    for(i=0;i<9;i++){
        if(a[i]!=extraA && a[i]!=extraB)
            cout<<a[i]<<" "; // Printing the result
    }
}
