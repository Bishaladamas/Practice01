//
// Created by bisha on 03-11-2023.
//write a program in c to check weather a triangle is a right triangle or not.
#include<stdio.h>
int main (){
    float h,hy,b,a,c,d,v;
    printf("Enter the values of H.HY and B :\n");
    scanf ("%f%f%f",&h,&hy,&b);
    a=pow(h,2);
    c=pow(b,2);
    d=a+c;
    v=sqrt(d);
    int ab=(hy==v)?(hy==v):(hy==v);
    printf("%d\n",ab);
}
