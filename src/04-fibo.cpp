//
//  04-fibo.cpp
//  An implementation of fibonacci series in C++
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library

using namespace std;

int recursive_fibonacci(int n) {
    // check the base case and return 0 for f(0) and 1 for f(1)
    if(n < 2)
        return n < 1 ? 0 : 1;
    // recursive function call (potential stack overflow)
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

int main(int argc, const char * argv[]) {

    // Test our recursive fibonacci function for n = 0, 5, 10, ..., 50
    for(int i = 0; i <= 50; i += 5)
        cout << "Fibo(" << i << ") = " << recursive_fibonacci(i) << endl;

    return 0;
}

