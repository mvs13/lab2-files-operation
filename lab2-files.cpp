#include <iostream>
#include <stdio.h>
#include "fo-lib.h"

using namespace std;

int main()
{
    FILE* inputDataFile;
    
    inputDataFile = operSet::withFile::openFile("students1.csv");
    if (inputDataFile != 0) {
        std::cout << "File exist and opened" << std::endl;
    }
    else
    {
        std::cout << "File opening error " << inputDataFile << std::endl;
    }

    FILE* DataFile = operSet::withFile::openFile("");


}