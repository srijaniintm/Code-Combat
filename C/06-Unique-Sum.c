#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0){
        int n, i;
        scanf("%d",&n);         // Size of Array
        int arr[n];
        for(i=0; i<n; i++){         //intaking elements into array
            scanf("%d",&arr[i]);
        }
        long int sum=0;
        for (i=0; i<n-1; i++){        // traversing array 
            int flag=0;
        for(int j=i+1; j<n; j++){       // checking for duplicate element
                if (arr[i]==arr[j]){   //if repeated, then skip
                    flag=1;
                    break;
                }   
            }
            if(flag==0)             //if not repeated, add it
                sum+=arr[i];
        }
        sum += arr[n-1];            
        printf("%ld\n",sum);            //printing sum
        t--;
    }
    return 0;
}
