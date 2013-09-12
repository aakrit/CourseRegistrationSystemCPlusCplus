//
//  student.cpp
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/22/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "student.h"

//static double id* = 0;
double Student::id = 0;

Student::Student(std::string name, std::string major): name(name), major(major)
{
    std::cout << "Welcome " << this->name << std::endl;
    id++;
    this->studentid = id;
    std::cout << "Your student id is: " << this->studentid << std::endl;
    
}

std::string Student::getName()
{
    return this->name;
}