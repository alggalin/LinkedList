#include "ll.hpp"

void LinkedList::insertEntry(int data) {
    Node* entryNode = new Node;
    entryNode->data = data;

    // if list is empty, insert at the head, else insert at the front
    if(head == nullptr) {
        head = entryNode;
    }
    else {
        entryNode->next = head;
        head = entryNode;
    }
}

void LinkedList::deleteEntry(int data) {
    Node* curr = head;
    Node* prev = nullptr;


    while(curr != nullptr) {

        if(curr->data == data) {
            if(prev != nullptr) {  // check if we're currently on the head of list
                prev->next = curr->next;
            }
            
            if(head == curr) {  // if we're on the head, move it to the next
                head = curr->next;
            }
            
            delete curr;
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    
}

void LinkedList::deleteList() {
    Node* curr = head;

    while(head != nullptr) {
        head = curr->next;
        delete curr;
        curr = head;
    }

}

Node* LinkedList::findEntry(int data) {
    Node* entry = head;

    while(entry != nullptr) {
        if(entry->data == data) {
            return entry;
        }
        entry = entry->next;
    }
    return nullptr;
}

void LinkedList::printList() {
    Node* curr = head;

    while(curr != nullptr) {
        std::cout << curr->data << " -> ";
        curr = curr->next;
    }

    std::cout << "null" << std::endl;
}