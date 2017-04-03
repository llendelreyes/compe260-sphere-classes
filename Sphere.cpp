//
//  Sphere.cpp
//  Program 2 Classes
//
//  Created by Llendel Reyes.
//  Copyright © 2017 Llendel Reyes. All rights reserved.

#include <iostream>

#define pi 3.14
#include "Sphere.h" // Includes Sphere.h file


Sphere::Sphere(){
    
    radius = 1.0;
    
}

Sphere::Sphere(double userRadius) { //Scope operator to declare functions from class Sphere outside class
    
    radius = userRadius;
    
}

void Sphere::setRadius(double userRadius) {
    
    radius = userRadius;
    
}

double Sphere::getRadius(){ // Returns result from functions outside class
    
    return radius;
    
}

double Sphere::getDiameter() {
    
    return 2 * radius;
    
}

double Sphere::getCircumference() {
    
    return 2 * pi * radius;
    
}

double Sphere::getArea() {
    
    double userRadius = getRadius();
    
    return 4 * pi * userRadius * userRadius;
    
}

double Sphere::getVolume() {
    
    double userRadius = getRadius();
    
    return (4 * pi * userRadius * userRadius * userRadius) / 3;
    
}


std::ostream &operator << (std::ostream &o, Sphere &s) { //Definition of ostream function and return cout statements for the accessor functions with default Radius = 1.0
    
    o << "Radius = " << s.getRadius() << std::endl;
    
    o << "Diameter = " << s.getDiameter() << std::endl;
    
    o << "Circumference = " << s.getCircumference() << std::endl;
    
    o << "Area = " << s.getArea() << std::endl;
    
    o << "Volume = " << s.getVolume() << std::endl;
    
    return o;
    
}
