#include <iostream>
#include <vector>

#include "Hash.h"


int HashTable::GetHash1(const std::string& string)
{
    return 1;
}

int HashTable::GetHash2(const std::string& string)
{
    int hash = string[0];
    return hash;
}

int HashTable::GetHash3(const std::string& string)
{
    int hash = 0;
    char i = string[0];
    while (i != ' ')
    {
        hash += string[i];
        i++;
    }
    return hash;
}

int HashTable::GetHash4(const std::string& string)
{
    int hash = 0;
    for (int i = 0; i < string.size(); i++)
    {
        hash += string[i];
    }
    return hash;
}

int HashTable::GetHash5(const std::string& string)
{
    int hash = 0;
    for (int i = 0; i < string.size(); i++)
    {
        hash += (string[i] << 2) * 179;
    }
    return hash;
}

int HashTable::GetHash6(const std::string& string)
{
    if (string.size() == 0)
    {
        return 1;
    }
    if (string.size() == 1)
    {
        return string[0];
    }
    else
    {
        return GetHash6(string) << 1 ^ string[string.size()];
    }
}