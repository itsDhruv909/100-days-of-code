//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;   // store remainder (0 or 1)
        n = n / 2;           // divide by 2
        i++;
    }

    printf("Binary: ");

    // print array in reverse order
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}