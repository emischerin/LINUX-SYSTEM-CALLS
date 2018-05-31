#ifndef FILEIO_H_
#define FILEIO_H_

#include <stdlib.h>
#include <iostream>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

class FileIO{

public:

        //Buffer for reading files
        char* buffer;

        int OpenFileReadOnly(const char* filepath);
        int OpenFileWriteOnly(const char* filepath);

        // This function creates file but user has no rights to open file
        int CreateFile(const char* filepath);

        //Also Creates a file,still user has no rights to open and manipulate file
        int CreateFileWithFullPermissions(const char* filepath);

        unsigned int ReadFile(int file,unsigned int count);

        void SetBufferSize(int size);

        void PrintBuffer(void);

private:
            int buffer_length;

};
#endif // FILEIO_H
