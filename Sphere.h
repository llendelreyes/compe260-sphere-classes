//
//  Sphere.h
//  Program 2 Classes
//
//  Created by Llendel Reyes.
//  Copyright © 2017 Llendel Reyes. All rights reserved.


#include <iostream>

#ifndef SPHERE_H
#define SPHERE_H

class Sphere{
    
public:
    
    Sphere();
    
    Sphere(double userRadius); // Explicit Value Constructor
    
    void setRadius(double userRadius); // Mutator Function
    
    double getRadius(); // Declaration of 5 accessor functions
    
    double getDiameter();
    
    double getCircumference();
    
    double getArea();
    
    double getVolume();
    
    
    friend std::ostream &operator << (std::ostream &o, Sphere &s); //Declaration of display function of type ostream to display accessor functions
    
private:
    
    double radius = 1.0; // Default Constructor
    
};

#endif
