//Write a program to check if a number is a strong number.
#include <stdio.h>
int main(){
    int num,temp,i,fact=1,str=0, digit;
    printf("Enter Number: ");
    scanf("%d",&num);
    temp = num;
    while(temp !=0){
        digit = temp%10;
        fact = 1;
        for(i = 1;i <=digit;i++){
            fact *=i;
        }
        str += fact;
        temp = temp/10;
    }
    if(num == str){
        printf("Strong number hai bhai");
    }
    else {
        printf("Nahi hai bhai strong number");
    }
    return 0;
}