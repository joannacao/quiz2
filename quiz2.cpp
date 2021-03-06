// quiz2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>

using namespace std; 

class Circle {
private:
	double radius; 
	double PI = 3.14159; 

public: 
	Circle(); 
	Circle(double r); 
	void setRadius(double r); 
	double getRadius(); 
	double getArea(); 
	double getDiameter(); 
	double getCircumference(); 
};

Circle::Circle() {
	radius = 0.0; 
}

Circle::Circle(double r) {
	radius = r; 
}

void Circle::setRadius(double r) {
	radius = r; 
}

double Circle::getRadius() {
	return radius; 
}

double Circle::getArea() {
	return PI * radius * radius; 
}

double Circle::getDiameter() {
	return radius * 2; 
}

double Circle::getCircumference() {
	return 2 * PI * radius; 
}

int main()
{
	double input; 
	cout << "Please enter the circle's radius: "; 
	cin >> input; 

	Circle c(input); 
	cout << endl << "The circle's area is "  << c.getArea() << endl; 
	cout << "The circle's diameter is " << c.getDiameter() << endl; 
	cout << "The circle's circumference is " << c.getCircumference() << endl; 
    return 0;
}

