#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

void SinglyLinkedList::addNode(Song data) {
    Node* newNode = new Node(data);
    if (head == nullptr)
        head = newNode;
    else {
        newNode->next = head;
        head = newNode;
    }
}

void SinglyLinkedList::removeNode(Song data) {
    Node* currentNode = head;
    Node* prevNode = nullptr;

    while (currentNode != nullptr && !currentNode->data.equals(data)){
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode == nullptr){
        cout << "Node no found\n";
        return;
    }

    if (prevNode == nullptr)
        head = currentNode->next;
    else {
        prevNode->next = currentNode->next;
    }

    delete currentNode;
}

void SinglyLinkedList::printList() {
    Node* currentNode = head;
    while (currentNode != nullptr) {
        cout << currentNode->data.toString() << "\n";
        currentNode = currentNode->next;
    }
    cout << endl;
}