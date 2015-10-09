//
//  LinkedList.h
//  LinkedList
//
//  Created by Emil Shirima on 10/9/15.
//  Copyright (c) 2015 Emil Shirima. All rights reserved.
//

#ifndef __LinkedList__LinkedList__
#define __LinkedList__LinkedList__

#include <stdio.h>
#include <iostream>

class Node
{
public:
    
    Node();
    Node(int);
    
    int data;
    Node * next;
};

class LinkedList
{
public:
    LinkedList();
    LinkedList(const LinkedList&);
    ~LinkedList();
    LinkedList& operator=(LinkedList);
    
    int length(LinkedList);
    void swap(LinkedList&);
    void insertInfront(int);
    void insertBack(int);
    void deleteFromFront();
    void deleteFromBack();
    bool isEmpty();
    void printContents();
    void printContents(Node *);
    
    // functions needed for Question 24
    Node reverseInPlace();
    void reverseOutOfPlace();
    
private:
    Node * head;
};


#endif /* defined(__LinkedList__LinkedList__) */
