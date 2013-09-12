//
//  main.cpp
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/18/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "student.h"
#include "course.h"
#include "Registrar.h"
#include <iostream>


int main(int argc, const char * argv[])
{

    // insert code here...
    Registrar* r = Registrar::makeInstance();
    r->saysomething();
    std::cout << std::endl;
    std::cout << "Lets try to create another instrance of this class call it 'v' \n" << std::endl;
    Registrar* v = Registrar::makeInstance();
    //std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "Lets check to make sure both objects points to the same object" << std::endl;
    
    std::cout << "The type 'r' is the first instance created and points to object memory: " << r << std::endl;
    std::cout << "When next type 'v' was created it didn't create a new instance. We know this because it also points to the same object in memeory: " << std::endl << v << std::endl;
    
    std::cout << "Hence Registrar class implements a Singleton Pattern" << std::endl << std::endl;
    
    std::cout << "Now that we have created a regristrar instance lets create some courses, students and add those courses for that student" << std::endl << std::endl;
    
    Course math = Course("Math", 10);
    Course english = Course("English", 3);
    
    
    Student amy = Student("Amy", "Comp Sci");
    Student max = Student("Max", "Poly Sci");
    Student carl = Student("Carl", "English");
    Student sandy = Student("Sandy", "English");
    
    //    r->checkClassSeating(math);
    
    r->signupforclass(carl, math);
    r->signupforclass(carl, english);
    
    r->signupforclass(amy, math);
    r->signupforclass(amy, english);
    r->signupforclass(sandy, math);
    r->signupforclass(sandy, english);
    r->signupforclass(max, math);
    r->signupforclass(max, english);
    

    
//    std::vector<Student> a = math.getStudents();
//    for_each(a.begin(), a.end(), [](){ std::cout <<
    
    return 0;
}

