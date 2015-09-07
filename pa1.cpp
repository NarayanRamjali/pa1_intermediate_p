// <Narayan Ramjali>

#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

// Function for calculating the area of a 3D triangle
double  computeArea(Point &a, Point &b, Point &c){

    // Calculate half perimeter s= (a+b+c)/2
    double s = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2.0;

    // calculate area
    return sqrt (s* (s - a.distanceTo(b)) * (s - b.distanceTo(c)) * (s -c.distanceTo(a)));
}

int main() {
    double x, y, z;     // Declared three coordinator variables

    // Enter three x, y, and z coordinators for first point A.
    cout << "Please enter the x, y, and z coordinates of the first point: " << endl;
    cin >> x >> y >> z;

    // First point
    Point first = Point (x, y, z);

    // Enter three x, y, and z coordinators for second point B.
    cout << "Please enter the x, y, and z coordinates of the second point: " << endl;
    cin >> x >> y >> z;

    // Second point
    Point second = Point (x, y, z);

    // Enter three x, y, and z coordinators for third point C.
    cout << "Please enter the x, y, and z coordinates of the third point: " << endl;
    cin >> x >> y >> z;

    // First point
    Point third = Point (x, y, z);

    // The area of the triangle
    double area = computeArea(first, second, third);

    // Print the total area
    cout << "The area is: " << area << endl;

    return 0;
}
