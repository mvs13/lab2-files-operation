#include <iostream>
#include <stdio.h>
#include <direct.h>
#include <wchar.h>
#include "fo-lib.h"

using namespace std;

int main()
{
    FILE* inputDataFile;
    
    wchar_t* buffer;

    // Get the current working directory:
    if ((buffer = _wgetcwd(NULL, 0)) == NULL)
        perror("_getcwd error");
    else
    {
        wprintf(L"%lS \nLength: %zu\n", buffer, wcslen(buffer));
        //wprintf("%s", buffer);

        free(buffer);
    }

    inputDataFile = operSet::withFile::openFile("data\\students1.csv");
    if (inputDataFile != 0) {
        std::cout << "File exist and opened" << std::endl;
        int nStudents;
        operSet::withFile::readNumber(&nStudents, inputDataFile);
        std::cout << "nStudents is " << nStudents << std::endl;
    }
    else
    {
        std::cout << "File opening error " << inputDataFile << std::endl;
    }
}