#include "processmanager.h"

int ProcessManager::GetProcessId(void)
{
    int process_id;

    process_id = getpid();

    return process_id;
}

int ProcessManager::GetParentProcessId(void)
{
    int parent_process;

    parent_process = getppid();

    return parent_process;
}

void ProcessManager::ParseCommandLineArguments(int* argc,char* argv[])
{
    command_line_args = new std::vector<std::string>(*argc);

    for(int i = 0; i < *argc;i++){
        command_line_args->push_back(argv[i]);
    }


}

void ProcessManager::PrintCommandLineArguments(void)
{
    if (command_line_args == NULL){
            return;
    }

        std::vector<std::string>::iterator i = command_line_args->begin();

        while(i != command_line_args->end()){
            std::cout << *i++ << std::endl;
        }
}
