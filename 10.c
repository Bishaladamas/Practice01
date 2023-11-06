//
// Created by bisha on 16-10-2023.
//
//Write a program to print the following pyramid.
//*
//*   *
//*   *   *
#include<stdio.h>
intmain()
{
    intn;
    printf("THE NUMBER OF LINES FOR TH PYRAMID:");
    scanf("%d",&n);
    for(inti=1;i<=n;i++){
        for(intj=1;j<=n-i;j++){
            printf(" ");
        }
        for(intj=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
