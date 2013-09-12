//
//  Registrar.h
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/18/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_1_Singleton_Pattern__Registrar__
#define __OODesign_HW1_1_Singleton_Pattern__Registrar__

#include <iostream>
#include <string>
#include "course.h"

class Registrar
{
    static Registrar* instance;
    Registrar();

public:
    static Registrar* makeInstance();
    void signupforclass(Student& s, Course& cs);
    void saysomething();
    void checkClassSeating(Course& cs);
    ~Registrar();
};

#endif /* defined(__OODesign_HW1_1_Singleton_Pattern__Registrar__) */
