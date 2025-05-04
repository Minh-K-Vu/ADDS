#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* link;
public:
    Node(int data);
    int getData() const;
    Node* getLink() const;
    void setLink(Node* next);
};

#endif