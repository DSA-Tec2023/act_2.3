#include <iostream>
#include <map> 
#include <vector> 

int main() { 
    std::map<int, int> months = {
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
        {7, 0},
        {8, 0},
        {9, 0},
        {10, 0},
        {11, 0},
        {12,0}
    };

    std::vector<int> x = {1, 2, 3, 4, 3, 5, 1, 2, 1, 2}; 
    for (int i = 0; i < x.size(); i++) { 
    if (months.find(x[i]) != months.end()) { 
        months[x[i]] += 1; 
    } 
}


    for (int i = 1; i <= 12; i++) { 
        std::cout << "The month " << i << " has " << months[i] << std::endl; 
    }


    
    return 0; 
}