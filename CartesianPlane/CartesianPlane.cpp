//Write a program that provides the radius, circumference and area of a circle given the coordinates of its center point and a point on its circumference.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = 3.14159;

double calcDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double x1, double y1, double x2, double y2) {
    return calcDistance(x1, y1, x2, y2);
}

double calcCircumference(double radius) {
    return 2 * pi * radius;
}

double calcArea(double radius) {
    return pi * pow(radius, 2);
}

int main() {
    double radius;
    double circumference;
    double area;
    double x1;
    double x2;
    double y1;
    double y2;

    cout << "Please enter the two points in the form x1 y1 x2 y2: ";
    cin >> x1 >> y1 >> x2 >> y2;

    radius = calcRadius(x1, y1, x2, y2);

    circumference = calcCircumference(radius);
    area = calcArea(radius);

    cout << fixed << setprecision(2);
    cout << "The radius is: " << radius << endl;
    cout << "The area is: " << area << endl;
    cout << "The circumference is: " << circumference << endl;

    return 0;
}