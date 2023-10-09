#pragma once
#include <iostream>
#include "Node.hpp"

class LinkedList {

    Node * head;
public:
    LinkedList();
    LinkedList(Node * prev_node);

    void create_beginning(int new_data);
    void create_position(int position, int new_data);
    void insert_after_value(int value, int new_data);
    void create_end(int new_data);
    int search(int value);
    void display_list();
    void update(int position, int new_value);
    void delete_head();
    void delete_value(int value);
    void delete_last();
    ~LinkedList();

};
