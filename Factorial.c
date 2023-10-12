//
// Created by bisha on 12-10-2023.
//
#include <stdio.h>
int fact(int n ){
    int product =1;
    for (int i=1;i<=n;i++){
        product*=i;
    }
    return product;
}
int main (){
    int num ;
    scanf ("%d",&num);
    printf ("The factorial is %d",fact(num));

}