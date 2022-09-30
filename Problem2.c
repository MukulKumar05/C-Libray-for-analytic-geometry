/*
Saurabh Sir stays in Bhopal,
Prateek Sir stays in Bangalore.
Using GPS:
Latitude and Longitude values of Bhopal as 23.259933 N, 77.412613 E.
Latitude and Longitude values of Bangalore as 12.9716 N, 77.5946 E.
Calculate distance between Saurabh Sir and Prateek Sir.
*/

#include<stdio.h>
#include<conio.h>
#include "Library.h"
#include "Library.c"

int main()
{
    double distance, latitude1, longitude1, latitude2, longitude2;
    printf("Enter latitude value of location 1: ");
    scanf("%lf", &latitude1);
    printf("Enter longitude value of location 1: ");
    scanf("%lf", &longitude1);
    printf("Enter latitude value of location 2: ");
    scanf("%lf", &latitude2);
    printf("Enter longitude value of location 2: ");
    scanf("%lf", &longitude2);

    distance = find_distance(latitude1, longitude1, latitude2, longitude2);
    printf("Distance Between first location and second location is: %lf kilometers.\n",distance);
    return 0;
}