//
//  00-intro.cpp
//  Introduction to main arguments
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library

using namespace std;

int main(int argc, const char * argv[]) {

    // cout - print to standard output
    cout << "Hello World!" << endl;

    // argc - number of arguments passed to the main function
    cout << "Number of arguments: " << argc << endl;

    // argv - array of arguments passed to the main function
    // First argument is always the executable file name
    for(int i = 0; i < argc; i++) {
        cout << "Argument " << i << " is " << argv[i] << endl;
    }

    return 0;
}

