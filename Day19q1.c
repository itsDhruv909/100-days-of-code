//Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find HCF using Euclidean algorithm
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    // x now contains the HCF
    int hcf = x;
    int lcm = (a * b) / hcf;

    printf("LCM = %d\n", lcm);

    return 0;
}