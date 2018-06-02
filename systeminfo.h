#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include <iostream>
#include <fstream>
#include "fileio.h"

class SystemInfo{

public:

   std::string cpuinfo;
   std::string partitions;
   std::string devices;
   std::string mounts;
   std::string ioports;
   std::string interrupts;
   std::string meminfo;
   std::string modules;

    //Constructor
    SystemInfo(void);

    // Fullfills the array of system information
    void FullfillSystemInfoArray(void);

    void PrintSystemInfo(void);

    //Reads the data from files in /proc
    void UpdateSystemInfo(void);

private:
    FileIO* fileio;

};

#endif
