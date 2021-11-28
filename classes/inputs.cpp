#include "inputs.hpp"
#include <cstdlib>

using namespace std;

Inputs::Inputs()
{
    // std::cout << "JE SUIS LE CONSTRUCTEUR D'objet : Inputs" << endl;

}

std::vector<string> Inputs::getAlphabet()
{
    return this->alphabet;
}

std::string Inputs::create_random_inputs()
{
    string results;
    std::vector<std::vector<string>> finalInputs;
    finalInputs.push_back(this->getAlphabet());
    finalInputs.push_back(this->hexa);
    finalInputs.push_back(this->numList);
    finalInputs.push_back(this->specialChar);

    std::vector<string> finalInputsString = finalInputs[0];
    // cout << "Le inputs random généré est : " << (finalInputs[0]).size() << endl;
    
    int i = rand() % this->alphabet.size(); 
    int j = rand() % this->hexa.size(); 
    int k = rand() % this->numList.size();
    int l = rand() % this->specialChar.size();

    std::stringstream ss;
    std::stringstream cc;
    std::stringstream bb;
    std::stringstream tt;
    std::stringstream rr;

    ss << this->alphabet[i];
    cc << this->hexa[j];
    bb << this->numList[k];
    tt << this->specialChar[l];
    
    rr << ss.str() << cc.str() << bb.str() << tt.str();

    // cout << rr.str() << endl;

    results = rr.str();
    return results;
}
