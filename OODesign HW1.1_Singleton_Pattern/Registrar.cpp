//
//  Registrar.cpp
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 4/18/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "Registrar.h"

Registrar* Registrar::instance = NULL;

Registrar::Registrar(){}

Registrar* Registrar::makeInstance()
{
    if(instance == NULL)
    {
        instance = new Registrar();
    }
    else
    {
        std::cout << "Error: cannot create more than one instrance of this class";
    }
    return instance;
}

Registrar::~Registrar()
{
    std::cout << "Exiting the Registrar" << std::endl;
}

void Registrar::saysomething()
{
    std::cout << "1st instance created";
}

void Registrar::signupforclass(Student& s, Course& csa)
{
    csa.addStudent(s);
}

void Registrar::checkClassSeating(Course& csa)
{
    csa.getSeats();
}

//int Registrar::getclassSeats(Course c)
//    {
//        return c.maxseating;
//    }