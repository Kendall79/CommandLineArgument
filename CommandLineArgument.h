#ifndef WINDOWS32_PLATFORM_COMMAND_LINE_ARGUMENT_H
#define WINDOWS32_PLATFORM_COMMAND_LINE_ARGUMENT_H

#ifdef __cplusplus
#include <vector>
#include <string>

bool getArguments(std::vector<std::string>& arguments);

#endif // __cplusplus

#ifdef __cplusplus
extern "C"
char ** parseArgumentValues(int *argc);
extern "C"
void freeArgumentValues(char ** argv);
#else
extern
char ** parseArgumentValues(int *argc);
extern
void freeArgumentValues(char ** argv);
#endif // __cplusplus


#endif // WINDOWS32_PLATFORM_COMMAND_LINE_ARGUMENT_H

