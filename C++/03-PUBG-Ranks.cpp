#include <iostream>


using namespace std;
#include<stdio.h>
int main(){
    int n;
    cin>>n; // Taking Input
    int a[n],i,rank,flag=0;
    for(i=0;i<n;i++)
        cin>>a[i]; // Taking Input
    cin>>rank; // Taking Input
   for(i=n-1;i>=0;i--){ // Finding the last index of selected rank in the rank of participants
       if(a[i]==rank){
            cout<<i;
            flag = 1;
            break;
       }
   }
   if(flag == 0) // If selected rank does not exist in the rank of participants
        cout<<"-1";
    return 0;
}
