//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;   // extract last digit
        sum += rem;     // add to sum
        n = n / 10;     // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}