#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int length) {
    head = nullptr;
    if (length > 0) {
        Node* tail = nullptr;
        for (int i = 0; i < length; ++i) {
            Node* newNode = new Node(array[i]);
            newNode->setLink(nullptr);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            } else {
                tail->setLink(newNode);
                tail = newNode;
            }
        }
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->getLink();
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    newNode->setLink(nullptr);

    if (head == nullptr) {
        head = newNode;
    } else {
        if (pos <= 1) {
            newNode->setLink(head);
            head = newNode;
        } else {
            Node* prev = head;
            int index = 1;
            while (prev->getLink() != nullptr && index < pos - 1) {
                prev = prev->getLink();
                index = index + 1;
            }
            newNode->setLink(prev->getLink());
            prev->setLink(newNode);
        }
    }
}

bool LinkedList::deletePosition(int pos) {
    if (head == nullptr) {
        return false;
    } else {
        if (pos <= 1) {
            Node* toDelete = head;
            head = head->getLink();
            delete toDelete;
            return true;
        } else {
            Node* prev = head;
            int index = 1;
            while (prev->getLink() != nullptr && index < pos - 1) {
                prev = prev->getLink();
                index = index + 1;
            }
            Node* toDelete = prev->getLink();
            if (toDelete == nullptr) {
                return false;
            } else {
                prev->setLink(toDelete->getLink());
                delete toDelete;
                return true;
            }
        }
    }
}

int LinkedList::get(int pos) const {
    Node* current = head;
    int index = 1;
    while (current != nullptr && index < pos) {
        current = current->getLink();
        index = index + 1;
    }
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    } else {
        return current->getData();
    }
}

int LinkedList::search(int target) const {
    Node* current = head;
    int index = 1;
    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        } else {
            current = current->getLink();
            index = index + 1;
        }
    }
    return -1;
}

void LinkedList::printList() const {
    if (head != nullptr) {
        std::cout << "[";
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->getData();
            if (current->getLink() != nullptr) {
                std::cout << " ";
            }
            current = current->getLink();
        }
        std::cout << "]\n";
    }
}
