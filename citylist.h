//
//  citylist.h
//  lab25
//
//  Created by Vivek Kumar on 4/3/20.
//  Copyright © 2020 Vivek Kumar. All rights reserved.
//
#ifndef CITYLIST_H
#define CITYLIST_H

#include <string>
#include "citynode.h"
using namespace std;

class CityList {
public:
    CityList() { //default constructor.
        head = tail = nullptr; //intially pointing no where.
    }
    void append(CityNode* cityNode) { // *cityNode is a pointer of type or class CityNode.Where as simple cityNode is an object of type or class CityNode which holds the data or information.
        if (head == nullptr)
        {
            head = cityNode;// if head is pointing to null or empty then appending would lead to both head and tail pointing to that object or cityNode.
            tail = cityNode;
        }
        else if (head == tail)
        {
            head->next = cityNode;// if head is equal to tail then head's next points to new cityNode.
            tail = cityNode; //tail also points to the new cityNode.
        }
        else {
            tail->next = cityNode; //if head is not equal to tail then tail's next points to new CityNode.
            tail = cityNode; // tail also points to the new cityNode.
        }
    }
    void prepend(CityNode* cityNode) {
        if (head == nullptr)
        {
            head = cityNode;
            tail = cityNode;
        }
        else if (head == tail)
        {
            head = cityNode;
            head->next = tail;
        }
        else
        {
            cityNode->next = head;
            head = cityNode;
        }
    }
    void printCityList() {
        CityNode* temp; //temp is a temporary variable or pointer of type class CityNode.
        temp = head;// temp intially points to the head.

        while (temp != nullptr) //while temp is not equal to null should print basically goes from head to tail and then to null.
        {
            temp->data.printInfo(); //used to access data members.
            temp = temp->next;
        }
    }
    CityNode* search(string cityName) {
        CityNode* curNode = head;
        while (curNode != nullptr)
        {
            if (curNode->data.getName() == cityName)
            {
                return curNode;
            }
            curNode = curNode->next;
        }
        return nullptr;
    }
private:
    CityNode* head; //head is a pointer of class or type CityNode.
    CityNode* tail; //tail is pointer of class or type CityNode.
};

#endif
