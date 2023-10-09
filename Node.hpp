#include <iostream>

class Node {
public:
    int data;
    Node *next;
    Node() {}
    Node(int info) {
        data = info;
        next = NULL;
    }
};