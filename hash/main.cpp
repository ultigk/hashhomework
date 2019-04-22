#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include "Hash.h"

int main()
{
    /*std::cout << "Please input your string" << std::endl;
    std::cin >> string;*/

    HashTable Hash;
    
    std::ifstream in_stream("cano.txt");
    std::ofstream out_stream("outfile1.txt");

    std::cout << "Otladka2" << std::endl;
    std::string string;
    while (in_stream >> string)
    {
        Hash.Add(string);
    }

    std::cout << "Otladka3" << std::endl;
    for (size_t i = 0; i < Hash.GetConstHashSize(); i++)
    {
        out_stream << Hash.GetHashSize(i) << std::endl;
    }
    // out_stream << Hash.GetHash(string) << std::endl;
    std::cout << "Program finished" << std::endl;
    return 0;
}


