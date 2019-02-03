#include<iostream>
using namespace std;
#include<stdio.h>
int main(){
    int n1,n2,a[1000],m[1000],i;
    int max = 0, min = 100;  //As attendence and marks ranges between 1 and 100.
    cin>>n1>>n2; //Taking size of arrays
    for(i=0;i<n1;i++){
        cin>>a[i]; //Taking input for array one
        if(a[i] > max)
            max = a[i]; //Checking if input is greater than current maximum attendance. If True, storing it in max.
    }
    for(i=0;i<n2;i++){
        cin>>m[i]; //Taking input for array two
        if(m[i] < min)
            min = m[i]; //Checking if input is less than current minumum marks. If true, storing it in min.
    }
    cout<<max<<endl<<min; //Printing result
    return 0;
}