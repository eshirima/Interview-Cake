//
//  main.cpp
//  LinkedList
//
//  Created by Emil Shirima on 10/8/15.
//  Copyright (c) 2015 Emil Shirima. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    
    LinkedList testList = *new LinkedList();
    
    testList.insertInfront(69);
    testList.insertInfront(10);
    testList.insertInfront(12);
    
    testList.insertBack(30);
    testList.insertBack(6);
    testList.insertBack(9);
    testList.printContents();
    std::cout << "Hello"<<"\n\n";
    //TODO: Fix the error. The program swaps correctly but the return type is causing issues. This returns 'this' which is empty at this point. Make it return a Node*
    Node * temp = testList.head;
    *temp = testList.reverseInPlace();
    testList.printContents();
    std::cout << "Hello2"<<"\n\n";
    
    return 0;
}
