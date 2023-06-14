/* Test getArguments funtion for C++ */

#include <iostream>
#include <vector>
#include <string>
#include "CommandLineArgument.h"
using namespace std;


int main() {
    vector<string> argv;
    bool success = getArguments(argv);

    if (success == true) {
        int i;
        for (i = 0; i < (int)argv.size(); i++) {
            cout << "argv[" << i << "] = " << argv[i] << endl;
        }
        cout <<  endl;
        for (i = 0; i < (int)argv.size(); i++) {
            cout << "argument " << i + 1 << ": " << argv[i] << endl;
        }
    }
    return 0;
}

