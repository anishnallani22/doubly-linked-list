#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;

int main() {
    DoublyLinkedList  newList;
    /*newList.append(10);
    newList.append(22);
    newList.insertAtBeginning(5);
    newList.insertAtBeginning(14);
    newList.insertAtBeginning(5);
    cout << "Linked List: " << endl;
    newList.displayList();

    newList.deleteNode(5);
    cout << "After deleting 5" << endl;
    newList.displayList();

    newList.deleteNode(22);
    cout << "After deleting 22" << endl;
    newList.displayList();

    newList.deleteNode(2234);*/

    newList.append(10);
    cout << "Linked List: " << endl;
    newList.displayList();
    newList.deleteNode(10);
    cout << "After deleting 10" << endl;
    newList.displayList();


    return 0;
}
