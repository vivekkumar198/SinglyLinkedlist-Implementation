//
//  citynode.h
//  lab25
//
//  Created by Vivek Kumar on 4/3/20.
//  Copyright © 2020 Vivek Kumar. All rights reserved.
//
#ifndef CITYNODE_H
#define CITYNODE_H

#include <string>
#include "city.h"
using namespace std;

class CityNode { // class CityNode
public:
    CityNode(City city) { // CityNode constructor with parameter of type class City and object city.
        data = city;
        next = nullptr; // next is pointing to nowhere intially.
    }
    City data; // city is an object class or type City hence therefore can only be assigned to a variable of that same type or class as City.
    CityNode* next; //next is a pointer of class or type CityNode.
};

#endif
