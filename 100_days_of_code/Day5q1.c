//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>  

int main() {
    float principal, rate, time,n;
    float simpleInterest, compoundInterest, amount;

    // Input principal, rate, and time
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    printf("Enter no. of times cmpounded per annum: ");
    scanf("%f", &n);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    amount = principal * pow((1 + rate /(n*100)), n*time);
    compoundInterest = amount - principal;

    // Display results
    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}