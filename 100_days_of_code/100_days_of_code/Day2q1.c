//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    double area,perimeter,length,breadth;
    printf("Enter length and breadth of the rectangle in cm\n ");
    scanf("%lf %lf",&length, &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("Area of given dimensions:%0.2lfcm²\n",area);
    printf("Perimeter of given dimensions:%0.2lfcm\n",perimeter);
    return 0;
}