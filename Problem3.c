/*
image.png
Looking at an above image, actually that image is zoomed up version of pdf file.
As we see there is ‘A’ shaped character, it has three vertices which has coordinates
(20.077,
11.598) , (26.526, 90.138) , (23.674, 32.579).
We have to cover the area under ‘A’ shaped character and colour it black.
Calculate area under ‘A’ shaped character
*/

#include<stdio.h>
#include<conio.h>
#include "Library.h"
#include "Library.c"

int main()
{
    double area_under_A, x1, x2, x3, y1, y2, y3;
    printf("For a Triangle ABC having vertices A(x1, y1) , B(x2, y2) and C(x3, y3),\nEnter coordinates of first vertex: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of second vertex: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter coordinates of third vertex: ");
    scanf("%lf %lf", &x3, &y3);
    area_under_A = find_area(x1, x2, x3, y1, y2, y3);
    printf("Area to be coloured black is: %lf \n",area_under_A);
    return 0;
}