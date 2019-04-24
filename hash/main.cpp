#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include "Hash.h"

/*std::string TrimWord(const std::string& raw_word)
{
    size_t begin_pos = 0;
    size_t word_length = raw_word.npos;

    for (size_t i = 0; i < raw_word.size(); i++)
    {
        if (isalpha(raw_word[i]))
        {
            begin_pos = i;
            break;
        }
    }

    for (size_t i = begin_pos; i < raw_word.size(); i++)
    {
        if (!isalpha(raw_word[i]))
        {
            word_length = i - begin_pos;
            break;
        }
    }

    return raw_word.substr(begin_pos, word_length);
}*/

int main()
{
    HashTable Hash;
    std::ifstream in_stream("cano.txt");
    std::ofstream out_stream("outfile6.csv");

    std::cout << "Before add" << std::endl;
    std::string string;
    while (in_stream >> string)
    {
        Hash.Add(/*TrimWord(*/string);
    }

    std::cout << "Before outstream" << std::endl;
    for (size_t i = 0; i < Hash.GetConstHashSize(); i++)
    {
        out_stream << Hash.GetHashSize(i) << std::endl;
    }
    std::cout << "Program finished" << std::endl;
    return 0;
}


