#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList()
    : head(nullptr)
{}

LinkedList::LinkedList(int* array, int len)
    : head(nullptr)
{
    if (len <= 0) return;
    head = new Node(array[0]);
    Node* tail = head;
    for (int i = 1; i < len; ++i) {
        Node* newNode = new Node(array[i]);
        tail->setLink(newNode);
        tail = newNode;
    }
}

LinkedList::~LinkedList() {
    Node* cur = head;
    while (cur) {
        Node* tmp = cur;
        cur = cur->getLink();
        delete tmp;
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
    int   idx  = 1;
    while (prev->getLink() && idx < pos-1) {
        prev = prev->getLink();
        ++idx;
    }
    newNode->setLink(prev->getLink());
    prev->setLink(newNode);
}

bool LinkedList::deletePosition(int pos) {
    if (pos < 1 || head == nullptr) return false;
    if (pos == 1) {
        Node* tmp = head;
        head = head->getLink();
        delete tmp;
        return true;
    }
    Node* prev = head;
    int   idx  = 1;
    while (prev && idx < pos-1) {
        prev = prev->getLink();
        ++idx;
    }
    if (!prev || !prev->getLink()) return false;
    Node* toDel = prev->getLink();
    prev->setLink(toDel->getLink());
    delete toDel;
    return true;
}

int LinkedList::get(int pos) const {
    if (pos < 1) return std::numeric_limits<int>::max();
    Node* cur = head;
    int   idx = 1;
    while (cur && idx < pos) {
        cur = cur->getLink();
        ++idx;
    }
    if (!cur) return std::numeric_limits<int>::max();
    return cur->getData();
}

int LinkedList::search(int target) const {
    Node* cur   = head;
    int   idx   = 1;
    while (cur) {
        if (cur->getData() == target) return idx;
        cur = cur->getLink();
        ++idx;
    }
    return -1;
}

void LinkedList::printList() const {
    if (!head) return;
    std::cout << "[";
    Node* cur = head;
    bool first = true;
    while (cur) {
        if (!first) std::cout << " ";
        std::cout << cur->getData();
        first = false;
        cur = cur->getLink();
    }
    std::cout << "]";
}
