//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(){
    int a,b,sum,diff,prod,quo;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
        printf("sum: %d\n",sum);
        printf("difference: %d\n",diff);
        printf("product: %d\n",prod);
        if(b==0){
         printf("division not possible\n");
        }else 
        {
            printf("quotient: %d\n",a/b);
        }
    
    return 0;
}