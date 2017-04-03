//
//  Driver.cpp
//  Program 2 Classes
//
//  Created by Llendel Reyes.
//  Copyright © 2017 Llendel Reyes. All rights reserved.
//

#include "Sphere.h"


int main()
{
    Sphere defaultSphere, userSphere;
    
    double radius;
    
    std::cout << "< Standard Sphere >" << std::endl << defaultSphere << std::endl;
    // prints result of value of default constructor
    
    // Sets value of Radius in parantheses of setRadius() function for the userSphere results
    
    while (true) { // while loop to continue prompting user for radius input
        std::cout << "Enter value of radius >= 1. (or press 0 to quit): ";
        
        std::cin >> radius;
        
        userSphere.setRadius(radius);
        
        if (radius == 0) { // program ends if user inputs '0'
            
            break;
            
        }
        
        if (radius < 0) { // if user inputted value is negative, program prints "Your value is invalid"
            
            std::cerr << "Your value is invalid" << std::endl << std::endl;
        }
        
        else { //prints class functions with user input stored in mySphere if user value is valid
            
            std::cout << "< User Sphere >" << std::endl;
            
            std::cout << "Radius = " << userSphere.getRadius() << std::endl;
            
            std::cout << "Diameter = " << userSphere.getDiameter() << std::endl;
            
            std::cout << "Circumference = " << userSphere.getCircumference() << std::endl;
            
            std::cout << "Area = " << userSphere.getArea() << std::endl;
            
            std::cout << "Volume = " <<userSphere.getVolume() << std::endl << std::endl;
        }
    }
}

