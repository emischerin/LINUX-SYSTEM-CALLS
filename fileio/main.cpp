#include <iostream>
#include "fileio.h"

using namespace std;

int main()
{
    FileIO* fi = new FileIO();

    fi->SetBufferSize(1024);

    int file = fi->OpenFileReadOnly("/home/egor/test/math");

    unsigned int bytes_read = fi->ReadFile(file,1024);

    std::cout << "PROGRAM HAS READ:" << bytes_read << "BYTES" <<std::endl;

    std::cout << "WHAT IS IN BUFFER:" << std::endl;

    fi->PrintBuffer();

}
