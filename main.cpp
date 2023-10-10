#include <iostream>
#include <fstream>
#include "LinkedList.hpp"
#include <string>
#include <map>

std::string get_month(int number) { 
    std::map<int, std::string> months = {
        {1, "January"},
        {2, "February"},
        {3, "March"},
        {4, "April"},
        {5, "May"},
        {6, "June"},
        {7, "July"},
        {8, "August"},
        {9, "September"},
        {10, "October"},
        {11, "November"},
        {12, "December"}
    };

    if (months.find(number) != months.end()) {
        return months[number]; 

    } else {
        return "";  
    }

}


void read_and_get_bitacora_info(LinkedList& listaM, LinkedList& listaR, std::string file_name){
    std::ifstream bitacora_file(file_name);
    std::string line;
    while (std::getline(bitacora_file, line)) {
        if(line[17] == 'M')
            listaM.create_beginning(line);
        else
            listaR.create_beginning(line);
    }
}

int main() { 
    std::cout << "Hello, world!" << std::endl;
    LinkedList list;
    list.create_beginning("hola");

    list.create_position(1, "andres"); 
    list.display_list();

    LinkedList listaM;
    LinkedList listaR;
    read_and_get_bitacora_info(listaM, listaR, "canal.txt");
    
    std::cout << "Lista M" << std::endl;
    listaM.display_list();

    std::cout << "Lista R" << std::endl;
    listaR.display_list();

    std::string month = get_month(8);
    std::cout << "Month: " << month << std::endl;


    return 0; 
}