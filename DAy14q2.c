//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Product of even numbers from 1 to %d: ", n);

    int found = 0;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {   // Check even number
            product *= i;
            found = 1;
        }
    }

    if (found)
        printf("%lld\n", product);
    else
        printf("No even numbers!\n");

    return 0;
}
