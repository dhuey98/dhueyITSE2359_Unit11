#ifndef ORDEREDDOUBLYLINKEDLIST_H
#define ORDEREDDOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    DoublyNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class OrderedDoublyLinkedList {
private:
    DoublyNode* head;
    DoublyNode* tail;

public:
    OrderedDoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insertOrdered(int newData);
    void printForward();
    void printBackward();
};

#endif