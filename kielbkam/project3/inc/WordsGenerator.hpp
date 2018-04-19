#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>

class WordsGenerator
{
public:
    explicit WordsGenerator(std::istream& is);
    ~WordsGenerator() = default;

    const int get_size_of_vector() const
    {
        return m_vec_of_words.size();
    }
    const int get_size_of_map() const
    {
        return m_words.size();
    }
    void print_map() const;

private:
    std::vector<std::string> m_vec_of_words;
    std::map<std::string, std::vector<std::string>> m_words;
};
