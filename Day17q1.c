//Write a program to check if a number is an Armstrong number.
#include <stdio.h>

int main() {
    int n, original, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   // store original number

    while (n != 0) {
        rem = n % 10;           // get last digit
        rev = rev * 10 + rem;   // build reversed number
        n = n / 10;             // remove last digit
    }

    if (original == rev)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}