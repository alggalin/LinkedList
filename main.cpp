#include <iostream>
#include "ll.cpp"

using namespace std;

int main() {

    LinkedList list;

    for(int i = 0; i < 20; i++) {
        list.insertEntry(i);
    }
    list.printList();

    list.deleteEntry(19);
    list.printList();

    return 0;
}