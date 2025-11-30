//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the Number of terms(n):");
    scanf("%d", &n);
    float sum = 0.0;
    int num = 2 ,den = 3;
    for(int i = 1 ; i<=n ; i++){
        sum += (float)num/den;
        num+=2;
        den+=4;
    }
    printf("Sum is %f", sum);
    return 0;
}