//
//  compositepattern.cpp
//  OODesign HW1.1_Singleton_Pattern
//
//  Created by Aakrit Prasad on 5/4/13.
//  Copyright (c) 2013 Aakrit Prasad. All rights reserved.
//

#include "compositepattern.h"

Currency CompositeEquipment::NetPrice () {
    Iterator* i = CreateIterator();
    Currency total = 0;
    for (i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->NetPrice();
    }
    delete i;
    return total;
}

class Chassis : public CompositeEquipment { //account
public:
    Chassis(const char*);
    virtual ~Chassis();
    virtual Watt Power();
    virtual Currency NetPrice();
    virtual Currency DiscountPrice();
};

main()
{
    Cabinet* cabinet = new Cabinet("PC Cabinet");
    Chassis* chassis = new Chassis("PC Chassis");
    cabinet->Add(chassis);
    Bus* bus = new Bus("MCA Bus");
    ￼bus->Add(new Card("16Mbs Token Ring"));
    chassis->Add(bus);
    chassis->Add(new FloppyDisk("3.5in Floppy"));
    cout << "The net price is " << chassis->NetPrice() << endl;
}

