#include "OrderedCircularLinkedList.h"

void OrderedCircularLinkedList::insertOrdered(int newData) {
    Node* newNode = new Node(newData);

    if (!head) { // If list is empty
        head = newNode;
        head->next = head; // Point to itself to form a circular structure
        return;
    }

    Node* current = head;
    Node* prev = nullptr;
    
    // Handle case where new node needs to be inserted at the head
    do {
        if (newData < head->data) {
            newNode->next = head;

            // Find the last node to complete the circular link
            Node* tail = head;
            while (tail->next != head) {
                tail = tail->next;
            }

            tail->next = newNode;
            head = newNode;
            return;
        }

        prev = current;
        current = current->next;
    } while (current != head);

    // Insert at the correct position
    newNode->next = prev->next;
    prev->next = newNode;
}

void OrderedCircularLinkedList::printList() {
    if (!head) return;

    Node* current = head;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    cout << endl;
}