//
// Created by bisha on 16-10-2023.
//
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        // Print spaces before the character
        for (int j = 1; j <= i; j++) {
            printf(" ");
        }

        // Print the character
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }

        printf("\n");
    }

    return 0;
}
