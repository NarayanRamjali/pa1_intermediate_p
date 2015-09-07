/// <Narayan Ramjali>

#include "Point.h"
#include <cmath>

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
    x_coordinate = 0.0;
    y_coordinate = 0.0;
    z_coordinate = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
    x_coordinate = initX;
    y_coordinate = initY;
    z_coordinate = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x_coordinate = newX;
}

void Point::setY(double newY) {
    y_coordinate = newY;
}
void Point::setZ(double newZ) {
    z_coordinate = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
    return x_coordinate;
}

double Point::getY() {
    return y_coordinate;
}

double Point::getZ() {
    return z_coordinate;
}

// DistanceTo function

double Point::distanceTo(Point &nextPoint) {
    return sqrt ((x_coordinate - nextPoint.x_coordinate)*(x_coordinate - nextPoint.x_coordinate) +
                 (y_coordinate - nextPoint.y_coordinate)*(y_coordinate - nextPoint.y_coordinate) +
                 (z_coordinate - nextPoint.z_coordinate)*(z_coordinate - nextPoint.z_coordinate));

}
