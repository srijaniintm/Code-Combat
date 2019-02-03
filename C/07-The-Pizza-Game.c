#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);       //input
    if (n%4==0){            // checking for condition
        printf("Lose");
        return 0;
    }
    printf("Win");
}
