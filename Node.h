#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr){}
};

#endif //NODE_H
