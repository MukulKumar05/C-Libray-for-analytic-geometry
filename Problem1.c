/*
Problem 1:
Suppose there are two roads,
Road 1: ABC Road, represented by equation 5x + y - 3 = 0
Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0
These two roads meet each other at a chowk, called 123 Chowk.
Determine at which angle , these two roads meet each other at chowk.
What you have to do :
Create a Program which determines angle at which these roads meet at 123 Chowk.
*/

#include<stdio.h>
#include<conio.h>
#include "Library.h"
#include "Library.c"

int main()
{
    double angle_at_chowk, a1, b1, c1, a2, b2, c2;
    printf("For road ABC having equation of the form a1x + b1y + c1 = 0,\nEnter value of a1: ");
    scanf("%lf", &a1);
    printf("Enter value of b1: ");
    scanf("%lf", &b1);
    printf("Enter value of c1: ");
    scanf("%lf", &c1);
    printf("For road XYZ having equation of the form a2x + b2y + c2 = 0,\nEnter value of a2: ");
    scanf("%lf", &a2);
    printf("Enter value of b2: ");
    scanf("%lf", &b2);
    printf("Enter value of c2: ");
    scanf("%lf", &c2);
    angle_at_chowk = find_angle(a1, a2, b1, b2);
    printf("Angle at which roads ABC and XYZ meet at 123 Chowk is: %lf\n",angle_at_chowk);
    return 0;
}