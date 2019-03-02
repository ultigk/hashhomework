#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include "Hash.h"

int main()
{
    std::ofstream fout;
    HashTable Hash;
    std::string string;
    std::cin >> string;
    fout.open("outfile.csv");
    fout << Hash.GetHash1(string) << std::endl;
    fout.close();
    return 0;
}


