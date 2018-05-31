#include "fileio.h"

int FileIO::OpenFileReadOnly(const char* filepath)
{
    int open_status;

    open_status = open(filepath,O_RDONLY);

    if (open_status == -1){
        std::cout << "ERROR!" << std::endl;
   }else{
    std::cout << open_status << std::endl;
   }

   return open_status;
}

int FileIO::OpenFileWriteOnly(const char* filepath)
{
    int open_status;

    open_status = open(filepath,O_WRONLY);

    if (open_status == -1){
        std::cout << "ERROR!" << std::endl;
    }else{
        std::cout << open_status <<std::endl;
    }

    return open_status;
}

int FileIO::CreateFile(const char* filepath)
{
    int open_status;

    open_status = open(filepath,O_CREAT);

    if (open_status == -1){
        std::cout << "ERROR!" << std::endl;
    }else{
        std::cout << "SUCCESS!" << std::endl;
    }

    return open_status;
}

int FileIO::CreateFileWithFullPermissions(const char* filepath)
{
    int open_status;

    open_status = open(filepath,O_RDWR | O_CREAT);

    if (open_status == -1){
        std::cout << "ERROR!" << std::endl;
    }else{
        std::cout << "SUCCESS!" <<std::endl;
    }

    return open_status;
}

void FileIO::SetBufferSize(int size)
{
    buffer = (char*)calloc(size,sizeof(char));
    buffer_length = size;
}

unsigned int FileIO::ReadFile(int file,unsigned int count)
{
    //Count of bytes which system call reads.
    unsigned int bytes_read;

    bytes_read = read(file,buffer,count);

    return bytes_read;
}

void FileIO::PrintBuffer(void)
{
    for (int i = 0; i < buffer_length;i++){
        std::cout << buffer[i];
    }
}

void FileIO::ClearBuffer(void)
{
    free(buffer);
    buffer_length = 0;
}

void FileIO::ResetBuffer(int buffer_length)
{
    ClearBuffer();
    SetBufferSize(buffer_length);
}

void FileIO::ReadSystemInfo(std::string* info,const char* filepath)
{
    std::ifstream file(filepath);
    std::stringstream buffer;

    buffer << file.rdbuf();
    *info = buffer.str();
}
