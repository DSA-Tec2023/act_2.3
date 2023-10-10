#include <iostream>
#include <string>
#include "LinkedList copy.hpp"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(Node* prev_node) {
    head = prev_node;
}

void LinkedList::create_beginning(const std::string& new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
}

void LinkedList::create_position(int position, const std::string& new_data) {
    Node* node = head;
    int counter = 0;
    Node* new_node = new Node(new_data);

    if (head == nullptr || position == 0) {
        std::cout << "The list is empty, adding an element at the beginning." << std::endl;
        create_beginning(new_data);
        return;
    }

    while (node != nullptr) {
        if (counter == position) {
            Node* tmp = node;
            node = new_node;
            new_node->next = tmp;
            return;
        }
        node = node->next;
        counter++;
    }

    // If no position, add to the end
    create_end(new_data);
    return;
}

void LinkedList::insert_after_value(const std::string& value, const std::string& new_data) {
    Node* node = head;
    Node* new_node = new Node(new_data);
    while (node != nullptr) {
        if (value == node->data) {
            Node* tmp = node->next;
            node->next = new_node;
            new_node->next = tmp;
            return;
        }
        node = node->next;
    }
    return;
}

void LinkedList::create_end(const std::string& new_data) {
    Node* node = head;
    Node* new_node = new Node(new_data);
    while (node->next != nullptr) {
        node = node->next;
    }
    node->next = new_node;
    return;
}

int LinkedList::search(const std::string& value) {
    Node* node = head;
    int counter = 0;
    while (node != nullptr) {
        if (value == node->data) {
            return counter;
        }
        node = node->next;
        counter++;
    }
    return -1;
}

void LinkedList::display_list() {
    Node* node = head;
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

void LinkedList::update(int position, const std::string& new_data) {
    Node* node = head;
    int counter = 0;
    while (node != nullptr) {
        if (counter == position) {
            node->data = new_data;
            return;
        }
        node = node->next;
        counter++;
    }
    return;
}

void LinkedList::delete_head() {
    Node* node = head;
    if (node != nullptr) {
        Node* tmp = node->next;
        head = tmp;
        delete node;
        return;
    }
    std::cout << "Cannot delete the head. The list is empty." << std::endl;
    return;
}

void LinkedList::delete_value(const std::string& value) {
    Node* node = head;
    Node* prev_node = nullptr;
    while (node != nullptr) {
        if (node->data == value) {
            if (prev_node == nullptr) {
                head = node->next;
                delete node;
                return;
            }
            prev_node->next = node->next;
            delete node;
            return;
        }
        prev_node = node;
        node = node->next;
    }
    return;
}

void LinkedList::delete_last() {
    Node* node = head;
    while (node->next->next != nullptr) {
        node = node->next;
    }
    node->next = nullptr; // Delete last value
}

LinkedList::~LinkedList() {}
