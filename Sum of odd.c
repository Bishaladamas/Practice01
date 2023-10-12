//
// Created by bisha on 12-10-2023.
//
#include <stdio.h>
int main()
{
    int i, n=20, sum=0;

    for(i=1; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of odd numbers = %d", sum);
    return 0;
}