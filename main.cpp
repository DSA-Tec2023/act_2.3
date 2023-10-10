#include <iostream>
#include <fstream>
#include "LinkedList.hpp"

/*void read_and_get_bitacora_info(LinkedList& listaM, LinkedList& listaR, std::string file_name){
    std::ifstream bitacora_file(file_name);
    std::string line;
    while (std::getline(bitacora_file, line)) {
        if(line[17] == "M")
            listaM.create_beginning(line)
        else
            listaR.create_beginning(line)
    }
}*/

int main() { 
    std::cout << "Hello, world!" << std::endl;
    LinkedList list;
    list.create_beginning(1);

    list.create_position(1, 3); 
    list.display_list();

    return 0; 
}