#include "Node.h"

Node::Node(int data)
    : data(data), link(nullptr)
{}

int Node::getData() const {
    return data;
}

Node* Node::getLink() const {
    return link;
}

void Node::setLink(Node* next) {
    link = next;
}
