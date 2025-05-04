#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList()
    : head(nullptr)
{}

LinkedList::LinkedList(int* array, int len)
    : head(nullptr)
{
    for (int i = len - 1; i >= 0; --i) {
        Node* newNode = new Node(array[i]);
        newNode->setLink(head);
        head = newNode;
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
        return;
    }
    Node* prev = head;
    int index = 1;
    while (prev->getLink() && index < pos - 1) {
        prev = prev->getLink();
        ++index;
    }
    newNode->setLink(prev->getLink());
    prev->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (!head) return false;
    if (pos <= 1) {
        Node* toDelete = head;
        head = head->getLink();
        delete toDelete;
        return true;
    }
    Node* prev = head;
    int index = 1;
    while (prev->getLink() && index < pos - 1) {
        prev = prev->getLink();
        ++index;
    }
    Node* toDelete = prev->getLink();
    if (!toDelete) return false;
    prev->setLink(toDelete->getLink());
    delete toDelete;
    return true;
}

int LinkedList::get(int pos) const {
    Node* current = head;
    int index = 1;
    while (current && index < pos) {
        current = current->getLink();
        ++index;
    }
    if (!current) return std::numeric_limits<int>::max();
    return current->getData();
}

int LinkedList::search(int target) const {
    Node* current = head;
    int index = 1;
    while (current) {
        if (current->getData() == target) return index;
        current = current->getLink();
        ++index;
    }
    return -1;
}

void LinkedList::printList() const {
    if (!head) return;
    std::cout << "[";
    Node* current = head;
    while (current) {
        std::cout << current->getData();
        if (current->getLink()) std::cout << " ";
        current = current->getLink();
    }
    std::cout << "]" << std::endl;
}
