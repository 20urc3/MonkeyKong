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
    /*for(i = 0; i < 15000; i++){
        printf("The random inputs generated is : %s", inputs::random_inputs)
    }*/

    Inputs myInputs;
    Inputs myInputs2;
    Inputs myInputs3;

    myInputs3.create_random_inputs();


    for(int i = 0; i < 10; i++)
    {
        cout << myInputs.create_random_inputs() << endl;
    }


    //printf("The random inputs generated is : %s", Inputs::random_inputs)
    return 0;
}