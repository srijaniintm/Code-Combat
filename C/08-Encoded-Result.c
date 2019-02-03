#include <stdio.h>
int main()
{
    char string[10000];
    int count;
    long long int prod = 1;
    
    scanf("%s", string);        // intaking string input
    
    for (count = 0; string[count]!='\0'; count++)         //traversing the string
    {
        if ((string[count] >= '0') && (string[count] <= '9'))     //checking for digit
        {
            prod *= (string[count] - '0');          //multiplying the digits
        }
    }
    printf("%lld", prod);
    return 0;
}
