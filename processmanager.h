#ifndef PROCESSMANAGER_H
#define PROCESSMANAGER_H

#include <iostream>
#include <unistd.h>
#include <vector>
#include <string>

class ProcessManager{

public:

    //Returns current process id
    int GetProcessId(void);

    //Returns parent of the process that created process
    int GetParentProcessId(void);

    // Parsing Command-line args into private variables
    void ParseCommandLineArguments(int* argc,char* argv[]);

    //Just Prints them after parsing if needed
    void PrintCommandLineArguments(void);

private:

    std::vector<std::string>* command_line_args;
};

#endif
