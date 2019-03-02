#pragma once
#include <iostream>
#include <vector>


class HashTable
{
public:
    void Add(const std::string& vew_string);
    bool Has(const std::string& string) const;
    void Remove(const std::string& string);
    //int GetHash(const std::string& string) const;

    int GetHash1(const std::string& string);
    int GetHash2(const std::string& string);
    int GetHash3(const std::string& string);
    int GetHash4(const std::string& string);
    int GetHash5(const std::string& string);
    int GetHash6(const std::string& string);

    const auto& GetData() const
    {
        return data_;
    }

private:
    std::vector<std::vector<std::string>> data_;
};

    
