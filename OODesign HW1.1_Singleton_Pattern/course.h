//
//  course.h
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/22/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//
#ifndef __OODesign_HW1_1_Singleton_Pattern__course__
#define __OODesign_HW1_1_Singleton_Pattern__course__
#include <iostream>
#include <string>
#include <vector>
#include "student.h"

class Course
{
    std::string name;
    int maxseating;
    std::vector<Student> s;
    void setSeats();
    
public:
    Course(std::string name, int maxseating);
    void addStudent(Student& x);
    int getSeats() const;
    int seatstaken;

    std::vector<Student> getStudents();
    
    //friend class Registrar;
};


#endif /* defined(__OODesign_HW1_1_Singleton_Pattern__course__) */
