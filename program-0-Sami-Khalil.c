//********************************************************
// fracturing.c
// Author: Sami Khalil
// Class: COP 3223, Professor Parra
// Purpose: This program calculates width, height, distance,
// area, and perimeter based on user input and prints the results.
// Input: Coordinates for calculations.
//********************************************************

#include <stdio.h>
#include <math.h>

// function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is %.2lf\n", distance);
    return distance;
}

// function to calculate the perimeter of a rectangle
double calculatePerimeter(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double perimeter = 2 * (width + height);
    printf("The perimeter of the rectangle is %.2lf\n", perimeter);
    return perimeter;
}

// function to calculate the area of a rectangle
double calculateArea(double x1, double y1, double x2, double y2) {
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;
    printf("The area of the rectangle is %.2lf\n", area);
    return area;
}

// function to calculate the width
double calculateWidth(double x1, double x2) {
    double width = fabs(x2 - x1);
    printf("The width of the rectangle is %.2lf\n", width);
    return width;
}

// function to calculate the height
double calculateHeight(double y1, double y2) {
    double height = fabs(y2 - y1);
    printf("The height of the rectangle is %.2lf\n", height);
    return height;
}

// main function
int main() {
    double x1, y1, x2, y2;

    
    printf("Enter coordinates of point 1 (x1,y1): ");
    scanf("%lf,%lf", &x1, &y1);  
    printf("Enter coordinates of point 2 (x2,y2): ");
    scanf("%lf,%lf", &x2, &y2);  

    // call each function
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);

    return 0;
}
