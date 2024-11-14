#include "OrderedDoublyLinkedList.h"

void OrderedDoublyLinkedList::insertOrdered(int newData) {
    DoublyNode* newNode = new DoublyNode(newData);

    if (!head) { // If list is empty
        head = tail = newNode;
        return;
    }

    DoublyNode* current = head;
    while (current && current->data < newData) {
        current = current->next;
    }

    if (!current) { // Insert at the end
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    } else if (current == head) { // Insert at the beginning
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    } else { // Insert in the middle
        newNode->next = current;
        newNode->prev = current->prev;
        current->prev->next = newNode;
        current->prev = newNode;
    }
}

void OrderedDoublyLinkedList::printForward() {
    DoublyNode* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void OrderedDoublyLinkedList::printBackward() {
    DoublyNode* current = tail;
    while (current) {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}