#ifndef LL_H
#define LL_H

#include <iostream>

struct Node {
    Node* next = nullptr;
    int data;
};


class LinkedList {
    private:
        Node* head;
    
    public:

        // constructor for the linked list, head is initialized to be null
        LinkedList() { head = nullptr; }

        // linked list functions
        void insertEntry(int data);  // inserts data entry to front of list O(1)
        void deleteEntry(int data);  // deletes the first instance of the data entry O(n)
        void deleteList();           // deletes the entire list O(n)
        Node* findEntry(int data);   // returns pointer to first occurance of a data entry (null if not found)

        // functions for testing
        void printList();

};

#endif