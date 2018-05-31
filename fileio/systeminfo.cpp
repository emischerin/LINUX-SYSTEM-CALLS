#include "systeminfo.h"
#include <iostream>

SystemInfo::SystemInfo(void)
{

    fileio = new FileIO();
    UpdateSystemInfo();

}


void SystemInfo::PrintSystemInfo(void)
{
    std::cout << "==============CPU==============" << std::endl;
    std::cout << cpuinfo <<std::endl;
    std::cout << "============PARTITIONS=========" << std::endl;
    std::cout << partitions << std::endl;
    std::cout << "============DEVICES============" << std::endl;
    std::cout << devices << std::endl;
    std::cout << "============MOUNTS=============" << std::endl;
    std::cout << mounts << std::endl;
    std::cout << "===========IOPORTS=============" << std::endl;
    std::cout << ioports << std::endl;
    std::cout << "===========INTERRUPTS==========" << std::endl;
    std::cout << interrupts << std:: endl;
    std::cout << "===========MEMINFO=============" << std::endl;
    std::cout << meminfo << std::endl;
    std::cout << "===========MODULES=============" << std::endl;
    std::cout << modules << std::endl;
}

void SystemInfo::UpdateSystemInfo(void)
{
    fileio->ReadSystemInfo(&cpuinfo,"/proc/cpuinfo");
    fileio->ReadSystemInfo(&partitions,"/proc/partitions");
    fileio->ReadSystemInfo(&devices,"/proc/devices");
    fileio->ReadSystemInfo(&mounts,"/proc/mounts");
    fileio->ReadSystemInfo(&ioports,"/proc/ioports");
    fileio->ReadSystemInfo(&interrupts,"/proc/interrupts");
    fileio->ReadSystemInfo(&meminfo,"/proc/meminfo");
    fileio->ReadSystemInfo(&modules,"/proc/meminfo");


}

