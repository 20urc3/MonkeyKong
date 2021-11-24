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

int main(int argc, char *argv[])
{
    int i = 0;
    for(i = 0; i < 15000; i++){
        printf("The random inputs generated is : %s", inputs::inputs::random_inputs)
    }

    return 0;
}