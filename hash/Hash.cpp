#include <iostream>
#include <vector>
#include <cstring>
#include <string.h>
#include <cmath>
#include "Hash.h"

HashTable::HashTable()
{
    for (size_t i = 0; i < hash_size; i++)
    {
        std::vector<std::string> feel_my_holes;
        data_.push_back(feel_my_holes);
    }
}

//virtual~ HashTable::HashTable()

const auto& HashTable::GetData() const
{
    return data_;
}

size_t HashTable::GetConstHashSize() const
{
    return hash_size;
}

int HashTable::GetHashSize(const int basket_full) const
{
    return data_[basket_full].size();
}

void HashTable::Add(const std::string& new_string)
{
    if (this->Has(new_string) == 0)
    {
        data_[GetHash(new_string)].push_back(new_string);
    }
}

bool HashTable::Has(const std::string& string) const
{
   /* const int hash = GetHash(value);
    const std::vector<std::string>& busket = data_[hash];

    if (strstr(string, data_))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    */

    for (size_t i = 0; i < data_[GetHash(string)].size(); i++)
    {
        if (data_[GetHash(string)][i] == string)
        {
            return 1;
        }
    }
    return 0;
}

void HashTable::Remove(const std::string& string)
{
    for (size_t i = 0; i < data_[GetHash(string)].size(); i++)
    {
        if (data_[GetHash(string)][i] == string)
        {
            data_.erase(data_.begin() + i); // 1 аргумент - удаление на указанной позиции 
        }
        else
        {
            continue;
        }
    }
}

int HashTable::GetHash(const std::string& string) const
{
    return GetHash1(string) % data_.size(); // где data_.size() == 1013 в нашей задаче
}

int GetHash1(const std::string& string)
{
    return 1;
}

int GetHash2(const std::string& string)
{
    int hash = (int) string[0];
    return hash;
}

int GetHash3(const std::string& string)
{
    int hash = 0;
    char i = string[0];
    while (i != ' ')
    {
        hash += (int) string[i];
        i++;
    }
    return hash;
}

int GetHash4(const std::string& string)
{
    int hash = 0;
    for (size_t i = 0; i < string.size(); i++)
    {
        hash += (int) string[i];
    }
    return hash;
}

int GetHash5(const std::string& string)
{
    int hash = 0;
    for (size_t i = 0; i < string.size(); i++)
    {
        hash += ((int)string[i] << 2) * 179;
    }
    return hash;
}

int GetHash6(const std::string& string)
{
    if (string.size() == 0)
    {
        return 1;
    }
    if (string.size() == 1)
    {
        return (int)string[0];
    }
    else
    {
        return GetHash6(string) << 1 ^ string[string.size()];
    }
}