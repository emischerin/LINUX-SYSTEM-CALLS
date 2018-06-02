#include <iostream>
#include "systeminfo.h"
#include "fileio.h"
#include "processmanager.h"

using namespace std;

int main(int argc,char* argv[])
{
        ProcessManager* pm = new ProcessManager();

        std::cout << pm->GetProcessId() << std::endl;
        std::cout << pm->GetParentProcessId() << std::endl;
        pm->ParseCommandLineArguments(&argc,argv);
        pm->PrintCommandLineArguments();
}
