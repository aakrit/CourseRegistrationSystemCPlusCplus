//
//  course.cpp
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/22/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "course.h"

std::string name;
std::vector<Student> s;


Course::Course(std::string name, int maxseating): name(name), maxseating(maxseating), seatstaken(0)
{
    std::cout << "We have create the following course: " << this->name << std::endl;
    std::cout << "This course has a max seating of " << this->maxseating << " students." << std::endl;
    
}

void Course::addStudent(Student& x)
{
    if (seatstaken < maxseating)
    {
        //std::cout << "before seatstaken: " << seatstaken << std::endl;
        ++seatstaken;
        //std::cout << "before seatstaken: " << seatstaken << std::endl;
        //std::cout << maxseating << std::endl;
        s.push_back(x);
        std::cout << x.getName() << " is now registered for " << this->name << std::endl;
        std::cout << "There are " << seatstaken << " students in the class" << std::endl;
    }
    else
    {
        std::cout << this->name << " class is now full " << x.getName() << "! Please select a different class" << std::endl;
    }
}

void Course::setSeats()
{
    this->seatstaken++;
}
int Course::getSeats() const
{
    return this->seatstaken;
}
std::vector<Student> getStudents()
{
    return s;
}
