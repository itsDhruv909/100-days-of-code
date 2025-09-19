//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
int main(){
    double area,pi,circum,radius;
    printf("Enter the radius of the circle in cm\n");
    scanf("%lf",&radius);
    pi=3.14;
    circum=2*pi*radius;
    area=pi*radius*radius;
    printf("Circumference of the given circle is:%.2lfcm\n",circum);
    printf("Area of the given circle is:%.2lfcm²\n",area);
    return 0;
}