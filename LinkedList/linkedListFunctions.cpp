#include "Functions.h"
#include <iostream>
#include <vector>

void getUserInput()
{
    int ip_len = 0;
    std::vector<int> ip_array; 
    std::cout << "Enter input length : ";
    std::cin >> ip_len ;
    std::cout << "Enter input elements : ";
    auto val = 0;
    for(int i = 0 ; i < ip_len; i++)
    {
        std::cin >> val;
        ip_array.push_back(val); 
    }   
    
    for(auto it = ip_array.begin(); it != ip_array.end(); it++)
        std::cout << ' ' << *it;
}