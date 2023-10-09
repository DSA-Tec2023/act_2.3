#include <iostream>
#include "LinkedList.hpp"

int main() { 
    std::cout << "Hello, world!" << std::endl;
    LinkedList list;
    list.create_beginning(1);

    list.create_position(1, 3); 
    list.display_list(); 

    return 0; 
}