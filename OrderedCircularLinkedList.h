#ifndef ORDEREDCIRCULARLINKEDLIST_H
#define ORDEREDCIRCULARLINKEDLIST_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class OrderedCircularLinkedList {
private:
    Node* head;

public:
    OrderedCircularLinkedList() : head(nullptr) {}

    void insertOrdered(int newData);
    void printList();
};

#endif