//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number of terms(n):");
    scanf("%d", &n);
    float sum = 1.0;
    int num = 3 ,den = 4;
    for(int i = 1 ; i<=n-1 ; i++){
        sum += (float)num/den;
        num+=2;
        den+=2;
    }
    printf("Sum is %f", sum);
    return 0;
}