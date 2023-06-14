/* Test parseArgumentValues funtion for C */

#include <stdio.h>
#include "CommandLineArgument.h"


int main() {
    int argc = 0;
    char ** argv = parseArgumentValues(&argc);

    if (argv != NULL) {
        int i;
        for (i = 0; i < argc; i++) {
            printf("argv[%d] = %s\n", i + 1, argv[i]);
        }
        printf("\n");
        for (i = 0; i < argc; i++) {
            printf("argument %d: %s\n", i + 1, argv[i]);
        }
        freeArgumentValues(argv);
    }
    return 0;
}

