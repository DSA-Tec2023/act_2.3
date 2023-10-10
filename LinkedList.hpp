#pragma once
#include <iostream>
#include <string> // Include the string header
#include "Node.hpp"

class LinkedList {
    Node* head;

public:
    LinkedList();
    LinkedList(Node* prev_node);

    void create_beginning(const std::string& new_data); // Change the argument type to string
    void create_position(int position, const std::string& new_data); // Change the argument type to string
    void insert_after_value(const std::string& value, const std::string& new_data); // Change argument types to string
    void create_end(const std::string& new_data); // Change the argument type to string
    int search(const std::string& value); // Change the return type and argument type to string
    void display_list();
    void update(int position, const std::string& new_value); // Change the argument type to string
    void delete_head();
    void delete_value(const std::string& value); // Change the argument type to string
    void delete_last();
    void print_file(std::string); 

    Node * merge(Node *, Node *); 
    Node * mergeSort(Node *);

    void merge_sort_id(); 
    ~LinkedList();
};
