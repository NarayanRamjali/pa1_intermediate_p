# pa1_2312

/*
 Narayan Ramjali
 104472149
 CSCI 2312
 
 Code is fully commented and this is a little guide.
 
 POINT.H File{
 
 At the Point.h file I made 3-dimentional point class.
 I created x, y ,and x coordinate in private and I added one more parameter double z at the public constructor.
 one more mutator (void setX(double newZ)) and one more Accessor (double getZ()) are added.
 I created distanceTo (Point &nextPoint) at the header file to point the distance between two points.
  }
 
 POINT.CPP{
 
 I added one more initializer z_coordinate = 0.0 at the default constructor;
 I added one more parameter double initZ.
 I added one more mutator and another accessor for third coordinate, which are similar to the origional code.
 
 I created a distanceTo function it returns all the distance of two coordinates.
 
 }
 
  pa1.cpp {
 
 I created two functions in the pa1.cpp file.
 
 1. computeArea function calculate the area of 3-D triangle.
    computeArea has three parameters, each parameters points the three points of a 3-D triangle (A, B, and C points which is first, second and third in main() function)
    The calculation is based on the Heron's formula.
 
 2. The main () function thake the 3 coordinate values from user and displays the total area of a triangle.
    I declare the three double variables x, y, and z.
    User allows to put three coordinates x, y, and z three times.
    computeArea calculate the area of a triangle and return the value of area and display at the main() function.
 }
 
 I tried following cases, and computeArea calculates all of the following cases too.
 
 Triangles with no area - all three points on the same line
 Triangles where two points are the same
 Triangles where all three points are the same
 Triangles with negative coordinate values

 */
