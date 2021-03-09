#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

FILE *stream, *stream2;

int main()
{
    int err;
    stream = fopen("filename.csv",_SH_DENYRW);
    if( err == 0 ){
        printf( "The file 'crt_fopen_s.c' was opened\n" );
    }else{
        printf( "The file 'crt_fopen_s.c' was not opened\n" );
    }
    /*
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    */
}