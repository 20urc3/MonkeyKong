#ifndef INPUTS
#define INPUTS

#include <iostream>
#include <iomanip>      
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <sstream>
#include <ostream>
#include <vector>
#include <string>

using namespace std;

class Inputs
{
    private:
        std::vector<std::string> random_inputs;
        std::vector<std::string> alphabet = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" "A", "B", "C", 
        "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
        std::vector<std::string> numList = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"}; 
        std::vector<std::string> hexa = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"}; 
        std::vector<std::string> specialChar = {"&", "é", "#", "§", "[", "^", "!", "?", ".", "/"};

    public:
        Inputs();
        std::string create_random_inputs();
        std::string get_random_inputs();
        std::vector<std::string> getAlphabet();
        std::vector<std::string> getnumList();
        std::vector<std::string> gethexa();
        std::vector<std::string> getspecialChar();
};

#endif
