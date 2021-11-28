#include <iostream>
#include <iomanip> 
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <sstream>
#include <ostream>
#include <vector>
#include <string>

#include "inputs.hpp"

using namespace std;

int main (int argc, char *argv[])
{
    srand(time(0));
    
    Inputs myInputs;
    Inputs myInputs2;
    myInputs.create_random_inputs();
    myInputs2.create_random_inputs();

    for(int i = 0; i < 5000; i++)
    {
        cout << myInputs.create_random_inputs() << myInputs2.create_random_inputs() << endl;

    }

    return 0;
}
