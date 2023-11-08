//
// Created by bisha on 08-11-2023.
//write a program in c to take a string value as a input from the user and display it .
#include<stdio.h>
int main ()
{
    int n,r;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}