//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int n, rem;
    long long product = 1;
    int found = 0;  // to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;  // extract last digit

        if (rem % 2 != 0) {  // check if odd
            product *= rem;
            found = 1;
        }

        n = n / 10;  // remove last digit
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}