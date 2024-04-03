#include <iostream>
#include <cmath> // Include cmath for mathematical functions
#include <iomanip> // Include iomanip for fixed manipulator

#define M_PI 3.14159265358979323846 // Define M_PI manually

using namespace std;

// Function prototypes
double calcDistance(double x1, double y1, double x2, double y2);
// PRECONDITION: x1, y1, x2, y2 are real numbers representing coordinates of two points on a Cartesian plane.
// POSTCONDITION: Returns the distance between the two points.

double calcRadius(double centerX, double centerY, double pointX, double pointY);
// PRECONDITION: centerX, centerY, pointX, pointY are real numbers representing coordinates of the center of the circle and a point on its circumference respectively.
// POSTCONDITION: Returns the radius of the circle.

double calcCircumference(double radius);
// PRECONDITION: radius is a real number representing the radius of the circle.
// POSTCONDITION: Returns the circumference of the circle.

double calcArea(double radius);
// PRECONDITION: radius is a real number representing the radius of the circle.
// POSTCONDITION: Returns the area of the circle.

int main() {
    // Input: Center point coordinates and a point on the circumference
    double centerX, centerY, pointX, pointY;
    cout << "Enter the coordinates of the center of the circle (x y): ";
    cin >> centerX >> centerY;
    cout << "Enter the coordinates of a point on the circumference (x y): ";
    cin >> pointX >> pointY;

    // Processing
    double radius = calcRadius(centerX, centerY, pointX, pointY);
    double circumference = calcCircumference(radius);
    double area = calcArea(radius);

    // Output: Radius, circumference, and area of the circle
    cout << "Radius of the circle: " << radius << endl;
    cout << "Circumference of the circle: " << circumference << endl;
    cout << "Area of the circle: " << area << endl;

    return 0;
}

// Function definitions
double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double centerX, double centerY, double pointX, double pointY) {
    return calcDistance(centerX, centerY, pointX, pointY);
}

double calcCircumference(double radius) {
    return 2 * M_PI * radius; // using manually defined constant M_PI for pi
}

double calcArea(double radius) {
    return M_PI * pow(radius, 2); // using manually defined constant M_PI for pi
}
