#include "CommandLineArgument.h"
#include "CommandLineToArgv.h"
#include <assert.h>
#include <windows.h>


char ** parseArgumentValues(int * argc) {
    char ** argv;
    argv = CommandLineToArgvA_ola(GetCommandLineA(), argc);
    return argv;
}

void freeArgumentValues(char ** argv) {
    assert(argv != NULL);
    LocalFree(argv);
}

