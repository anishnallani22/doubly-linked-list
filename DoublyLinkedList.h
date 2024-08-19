#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList(); //Constructor
    ~DoublyLinkedList(); //Destructor

    void append(int data);
    void insertAtBeginning(int data);
    //void insertAfter(Node* prevNode, int data);
    void deleteNode(int key);
    void displayList();
};

#endif //DOUBLYLINKEDLIST_H
