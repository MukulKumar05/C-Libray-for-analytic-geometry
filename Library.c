#include<math.h>

double find_angle(double a1, double a2, double b1, double b2)
{
    return atan((a2 * b1 - a1 * b2) / (a1 * a2 + b1 * b2)) * (180 / 3.14159265359);  // atan() function finds tanInverse
    // value returned by atan is in radians which is converted into degrees by multiplying by (180 / Pi)
}

double find_distance(double latitude1, double longitude1, double latitude2, double longitude2)
{
    double lat1Rad, lat2Rad, long1Rad, long2Rad; // variables for storing latitude and longitude values in radian form
    lat1Rad = latitude1 / (180 / M_PI); // M_PI defined in math.h
    lat2Rad = latitude2 / (180 / M_PI);
    long1Rad = longitude1 / (180 / M_PI);
    long2Rad = longitude2 / (180 / M_PI);

    // distance returned in kilometers
    return 3963.0 * 1.609344 * acos((sin(lat1Rad) * sin(lat2Rad)) + cos(lat1Rad) * cos(lat2Rad) * cos(long2Rad - long1Rad));
}

double find_area(double x1, double x2, double x3, double y1, double y2, double y3)
{
    double area;
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    if(area >= 0)
        return area;
    else
        return -area;
}