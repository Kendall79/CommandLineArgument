#include "CommandLineArgument.h"
#include "CommandLineToArgv.h"
#include <stdio.h>
#include <vector>
#include <string>


bool getArguments(std::vector<std::string>& arguments) {
    int argc = 0;
    char ** argv = parseArgumentValues(&argc);
    if (argv != NULL) {
        arguments.reserve((size_t)argc);
        arguments.clear();
        int i;
        for (i = 0; i < argc; i++) {
            arguments.push_back(argv[i]);
        }
        freeArgumentValues(argv);
        return true;
    }
    return false;
}

