


class HashTable
{
public:
    void Add(const std::string& vew_string);
    bool Has(const std::string& string) const;
    void Remove(const std::string& string);
    int GetHash(const std::string& string) const;
    const auto& GetData() const
    {
        return data_;
    }

private:
    std::vector<std::vector<std::string>> data_;
};