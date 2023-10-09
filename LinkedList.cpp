#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList() {
    head = NULL;
}

LinkedList::LinkedList(Node * prev_node) {
    head = prev_node;
}

void LinkedList::create_beginning(int new_data) {
    Node * new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
}

/**
 * @brief Based on the position, it puts the new data in the list AFTER said position (ie, if position = 0, it will put the new data in the first position after 0)
 * 
 * @param position 
 * @param new_data 
 */
void LinkedList::create_position(int position, int new_data) {
    Node * node = head;
    int counter = 0;
    Node * new_node = new Node(new_data);

    if (head == NULL || position == 0) {
        std::cout << "La lista está vacía, se añadirá un elemento al azar" << std::endl;
        create_beginning(new_data);
        return;
    }

    while (node != NULL) {
        if ((counter) == position) {
            Node * tmp = node;
            node = new_node;
            new_node->next = tmp;
            return;
        }
        node = node->next;
        counter++;
    }

    // if no position, add to end 
    create_end(new_data); 
    return;
}

void LinkedList::insert_after_value(int value, int new_data) {
    Node * node = head;
    Node * new_node = new Node(new_data);
    while (node != NULL) {
        if (value == (node)->data) {
            Node * tmp = node->next;
            node->next = new_node;
            new_node->next = tmp;
            return;
        }
        node = node->next;
    }
    return;
}

void LinkedList::create_end(int new_data) {
    Node *node = head;
    Node *new_node = new Node(new_data);
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = new_node;
    return;
}

int LinkedList::search(int value) {
    Node * node = head;
    int counter = 0;
    while (node != NULL) {
        if (value == (node)->data) {
            return counter;
        }
        node = node->next;
        counter++;
    }
    return -1;
}

void LinkedList::display_list() {
    Node * node = head;
    while (node != NULL) {
        std::cout << node->data << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

void LinkedList::update(int position, int new_data) {
    Node * node = head;
    int counter = 0;
    while (node != NULL) {
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
    Node * node = head;
    if (node != NULL) {
        Node * tmp = node->next;
        head = tmp;
        delete node;
        return;
    }
    std::cout << "No es posible eliminar la cabeza" << std::endl;
    return;
}

void LinkedList::delete_value(int value) {
    Node * node = head;
    Node * prev_node = NULL;
    while (node != NULL) {
        if (node->data == value) {
            if (prev_node == NULL) {
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
    Node *node = head;
    while (node->next->next != NULL) {
        node = node->next;
    }
    node->next = NULL; // delete last value
}

LinkedList::~LinkedList() {} 
