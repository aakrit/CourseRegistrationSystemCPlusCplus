//
//  compositepattern.h
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 5/4/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#ifndef __OODesign_HW1_1_Singleton_Pattern__compositepattern__
#define __OODesign_HW1_1_Singleton_Pattern__compositepattern__

#include <iostream>

class Equipment { //Component
public:
    virtual ~Equipment();
    const char* Name() { return _name; }
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator* CreateIterator();
protected:
    Equipment(const char*);
private:
    const char* _name;
};

class FloppyDisk : public Equipment { //bond
public:
    FloppyDisk(const char*);
    virtual ~FloppyDisk();
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};
//CompositeEquipment is the base class for equipment that contains other equipment. It's also a subclass of Equipment.
class CompositeEquipment : public Equipment { //portfolio
public:
    virtual ~CompositeEquipment();
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
    virtual void Add(Equipment*);
    virtual void Remove(Equipment*);
    virtual Iterator* CreateIterator();
protected:
    CompositeEquipment(const char*);
private:
    List _equipment;
};




#endif /* defined(__OODesign_HW1_1_Singleton_Pattern__compositepattern__) */
