#include "WordsGenerator.hpp"

WordsGenerator::WordsGenerator(std::istream& is)
{
    using vec_iter = std::vector<std::string>::iterator;

    std::string word;
    while (!is.eof())
    {
        getline(is, word, ' ');
        m_vec_of_words.push_back(word);
    }

    for (auto const& word_from_vec : m_vec_of_words)
    {
        m_words[word_from_vec];
    }

    vec_iter iter = m_vec_of_words.begin();
    const auto prev_iter = std::prev(m_vec_of_words.end());
    for (auto& word : m_words)
    {
        for (; iter != prev_iter; iter++)
        {
            const auto next_iter = std::next(iter);
            if (word.first == *iter)
            {
                word.second.push_back(*next_iter);
            }
        }
        iter = m_vec_of_words.begin();
    }
}

void
WordsGenerator::print_map() const
{
    for (auto const& word : m_words)
    {
        std::cout << word.first;
        for (auto const& index : word.second)
        {
            std::cout << "->" << index;
        }
        std::cout << std::endl;
    }
}