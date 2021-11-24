#include "inputs.hpp"
#include <cstdlib>

using namespace std;

Inputs::Inputs()
{
    std::cout << "JE SUIS LE CONSTRUCTEUR D'objet : Inputs" << endl;
    //
}

std::vector<string> Inputs::getAlphabet()
{
    return this->alphabet;
}

std::string Inputs::create_random_inputs()
{
    string results;
    std::vector<std::vector<string>> ultraCombo;
    ultraCombo.push_back(this->getAlphabet());
    ultraCombo.push_back(this->hexa);
    ultraCombo.push_back(this->numList);
    ultraCombo.push_back(this->specialChar);

    std::vector<string> mesCouiilles = ultraCombo[0];
    cout << "LA TAILLE - " << (ultraCombo[0]).size() << endl;

    //cout << "LA TAILLE - " << mesCouiilles.size()<< endl;

    
    int i = rand() % this->alphabet.size(); 

    std::stringstream ss;
    //ss << " - "  << " <3";

    //this->getID();

    ss << this->alphabet[i];
    results = ss.str();


    /*alphabet = alphabet[i]; //52

    srand(time(0));
    i = rand() % 10;
    numList = numList[i]; // 10

    srand(time(0));
    i = rand() % 16;
    hexa = hexa[i]; // 16

    srand(time(0));
    i = rand() % 10;
    specialChar = specialChar[i]; // 10

    random_inputs = specialChar + hexa + numList + alphabet;*/
    return results;
}
