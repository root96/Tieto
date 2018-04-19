#include "WordsGenerator.hpp"
#include <iostream>
#include <sstream>
using namespace std;

int
main()
{
    stringstream ss{"Kot Ala Kot Ala Cos"};
    WordsGenerator wg{ss};
    wg.print_map();
    return 0;
}