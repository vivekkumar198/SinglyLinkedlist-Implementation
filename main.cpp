//
//  main.cpp
//  lab25
//
//  Created by Vivek Kumar on 4/3/20.
//  Copyright © 2020 Vivek Kumar. All rights reserved.
//
#include <iostream>
#include "citylist.h"
using namespace std;

City cityArray[] = { City("Los Angeles", 4340174), City("San Diego", 1591688), City("San Francisco", 871421), City("Sacramento", 505628), City("Stockton", 323761), City("Redding", 90292), City("Las Vegas", 711926), City("Reno", 289485), City("Portland", 730428), City("Seattle", 752180), City("Eugene", 221452) };

CityList cityList1, cityList2;

void initCityListByAppend(CityList& list, const City array[], int size) {
    for(int i = 0; i < size; i++)
    {
    CityNode* temp = new CityNode(array[i]);
    list.append(temp);
    }
}
void initCityListByPrepend(CityList& list, const City array[], int size) {
    for(int i = 0; i < size; i++)
    {
    CityNode* temp = new CityNode(array[i]);
    list.prepend(temp);
    }
}
int main() {
    cout << "Initializing cityList1 with cityArray[] using appending:" << endl;
    initCityListByAppend(cityList1, cityArray, 11);
    cityList1.printCityList();
    cout << endl;
    cout << "Initializing cityList2 with cityArray[] using prepending:" << endl;
    initCityListByPrepend(cityList2, cityArray, 11);
    cityList2.printCityList();
    cout << endl;
    cout << "Searching for Stockton in cityList1:" << endl;
    cout << cityList1.search("Stockton")->data.getPopulation();
}
