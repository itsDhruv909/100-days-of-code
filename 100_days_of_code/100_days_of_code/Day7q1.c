//Write a program to input a year and check whether it is a leap year or not using conditional statements
#include <stdio.h>

int main() {
    int year;

    // Input a year
    printf("Enter a year: ");
    scanf("%d", &year);

if(year %4==0&&year%100=!0){
    printf("year is a leap year");
    else if(year%4==0&&year%100==0)
    {
        if(year%400==0)
        {
            printf("year is a leap year");
        
        }else printf("year is not a leap year");
    }

} else {
    printf("not a leap year");
}

    return 0;
}