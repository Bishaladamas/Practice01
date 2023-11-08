//
// Created by bisha on 08-11-2023.
//write a program in c to display the length of the string without using any string function
#include <stdio.h>

int stringLength(char* str) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    str[strcspn(str, "\n")] = '\0';
    int length = stringLength(str);
    printf("The length of the string is: %d\n", length);
    return 0;
}