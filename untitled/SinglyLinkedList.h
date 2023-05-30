//
// Created by wjsrh on 2023-04-05.
//

#ifndef UNTITLED_SINGLYLINKEDLIST_H
#define UNTITLED_SINGLYLINKEDLIST_H
#include "Node.h"

class SinglyLinkedList {
public:
    SinglyLinkedList() : head(nullptr) {}
    void addNode(Song data);
    void removeNode(Song data);
    void printList();

private:
    Node* head;
};

#endif //UNTITLED_SINGLYLINKEDLIST_H
