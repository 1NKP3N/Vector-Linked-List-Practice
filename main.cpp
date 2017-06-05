//
//  main.cpp
//  MyListBase
//
//  Created by Peter Casey on 5/16/16.
//  Copyright © 2016 Peter Casey. All rights reserved.
//

#include <iostream>
#include "MyVector.h"
#include "MyLinkedList.h"

using namespace std;

void testList(MyList& list) {
    list.push_back(10); list.push_back(88);
    list.insert(3, 27);
    cout << list.toString() << endl;
    cout << list.size() << endl;
    cout << list.at(3) << endl;
    cout << list.front() << endl;
    cout << list.back() << endl;
}

void addElements(MyList& list, int howMany) {
    for (int i = 0; i < howMany; i += 1) {
        list.push_back(i);
    }
}

int main() {
    std::cout << "<<<<<< My List >>>>>>\n";
    // MyList x; // cannot instantiate object, abstract class
    MyVector myVector{};
    myVector.push_back(34); myVector.push_back(55);
    addElements(myVector, 5);

    MyLinkedList myLinkedList{};
    myLinkedList.push_back(22); myLinkedList.push_back(54);
    addElements(myLinkedList, 8);

    testList(myVector);
    //testList(myLinkedList);

    return 0;
}
