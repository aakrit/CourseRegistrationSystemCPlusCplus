//
//  student.h
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/22/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_1_Singleton_Pattern__student__
#define __OODesign_HW1_1_Singleton_Pattern__student__

#include <iostream>
#include <string>

class Student
{
    static double id;
    
    std::string name;
    std::string major;
    double studentid;
    
public:
    Student(std::string name, std::string major);
    std::string getName();
};


#endif /* defined(__OODesign_HW1_1_Singleton_Pattern__student__) */
