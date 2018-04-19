#include "gtest/gtest.h"
#include "WordsGenerator.hpp"

TEST(WordsGenerator, constructor_with_one_parametr_with_char) {
    std::stringstream ss{"a"};
    EXPECT_EQ(1, (WordsGenerator{ss}.get_size_of_vector()));
}

TEST(WordsGenerator, constructor_with_one_parametr_with_longer_string) {
    std::stringstream ss{"Ale ma kota, a kot ma Ale."};
    EXPECT_EQ(7, (WordsGenerator{ss}.get_size_of_vector()));
}

TEST(WordsGenerator, constructor_with_one_parametr_check_numbers_of_keys) {
    std::stringstream ss{"Kot Ala Kot Ala Cos Cos Cos"};
    EXPECT_EQ(3, (WordsGenerator{ss}.get_size_of_map()));
}






