#pragma once
#include <iostream>
#include <vector>
#include <string>


class HashTable
{
public:
    HashTable();
    //virtual~ HashTable();
    void Add(const std::string& new_string);
    bool Has(const std::string& string) const;
    void Remove(const std::string& string);
    int GetHash(const std::string& string) const;
    int GetHashSize(const int basket_full) const;
    size_t HashTable::GetConstHashSize() const;
    const auto& GetData() const;

private:
    std::vector<std::vector<std::string>> data_;
    const size_t hash_size = 1013;
};

int GetHash1(const std::string& string);
int GetHash2(const std::string& string);
int GetHash3(const std::string& string);
int GetHash4(const std::string& string);
int GetHash5(const std::string& string);
int GetHash6(const std::string& string);
