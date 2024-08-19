#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

//Constructor Definition
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

//Destructor Definition
DoublyLinkedList::~DoublyLinkedList() {
    Node* currentNode = head;
    Node* nextNode = nullptr;
    while(currentNode != nullptr) {
        nextNode = currentNode->next;
        delete currentNode;
        currentNode = nextNode;
    }
}

void DoublyLinkedList::append(int data) {
    Node* newNode = new Node(data);
    if((head == nullptr) && (tail == nullptr)) {
        head = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::insertAtBeginning(int data) {
    Node* newNode = new Node(data); //Create a new node with provided data
    if((head == nullptr) && (tail == nullptr)) { //Check if list is empty
        head = newNode; //Both head and tail point to new node
        tail = newNode;
    }else {
        newNode->next = head; //Sets the new node's next
        head->prev = newNode;
        head = newNode;
        newNode->prev = nullptr;
    }
}

void DoublyLinkedList::deleteNode(int key) {
    Node* traverseNode = head;
    bool verifyStatus = false;
    //Iteration through linked list
    while(traverseNode != nullptr) {
        if(traverseNode->data == key) {
            Node* nextNode = traverseNode->next; //Save the next node
            //Node to be deleted is head
            if(traverseNode == head) {
                head = head->next;
                if(head != nullptr) {
                    head->prev = nullptr;
                }else {
                    head = nullptr;
                    tail = nullptr;
                }
            }else if(traverseNode == tail) {
                tail = traverseNode->prev;
                traverseNode->prev->next = nullptr;
            }else{
                //Node to be deleted is in middle
                traverseNode->prev->next = traverseNode->next;
                traverseNode->next->prev = traverseNode->prev;
            }
            delete traverseNode;
            traverseNode = nextNode;
            verifyStatus = true;
            cout << "Node successfully deleted" << endl;
            continue;
        }
        traverseNode = traverseNode->next;
    }
    if(!verifyStatus) {
        cout << "Node with specified key not found!" << endl;
    }

}

void DoublyLinkedList::displayList() {
    Node* currentNode = head;
    while(currentNode != nullptr) {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;
    }
}




