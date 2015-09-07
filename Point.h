// <Narayan Ramjali>

// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef POINT_H
#define POINT_H

// A 3-dimentional point class
class Point {

private:
    // Coordinates
    double x_coordinate;
    double y_coordinate;
    double z_coordinate;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX();
    double getY();
    double getZ();

    // distanceTo
    double distanceTo(Point &nextPoint);
};
#endif // __point_h
