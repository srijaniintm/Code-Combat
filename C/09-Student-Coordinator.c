#include <stdio.h>
#include <string.h>
int main()
{
    int i,n, m1=0, m2=0 ,m3 = 0;
    
    scanf("%d",&n);                     // number of students
    
    for(i=0; i<n; i++ ){
        char str[10];
        scanf("%s",&str);               // input section
        
        if (strcmp(str,"M1")==0)        //  checking for section and incrementing respective counter variable
            m1 = m1 + 1;
        else if (strcmp(str,"M2")==0)
            m2 += 1;
        else if (strcmp(str,"M3")==0)
            m3 += 1;
        
    }
    
    for(int i=0; i<m1; i++)             // printing sections respective number of times.
        printf("M1 ");
    
    for(int i=0; i<m2; i++)
        printf("M2 ");
    
    for(int i=0; i<m3; i++)
        printf("M3 ");
    
    return 0;
}
