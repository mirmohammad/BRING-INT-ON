//
//  1-files.cpp
//  [reading / writing] [from / to] files by example
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

///  Sample Problem ...

//  In this problem, you are asked to compute the sum of elements
//  in a sequence of numbers. The input consists of a list of
//  integer numbers and the output is the sum of them.

//  The input is specified in a file whose name is the first argument
//  of the program. The first line contains an integer N specifying
//  how many datasets are in the file. The reminder of the file encodes
//  the datasets. Each dataset starts with an integer M specifying
//  how many numbers are in the set. The following M lines each contain
//  one integer number.

//  The output is a file called whose name is the second argument
//  of the program: each line contains the answer for one of the datasets
//  in the order in which they were read form the input file.If the dataset
//  is empty the line consists of the word “EMPTY”. Otherwise the line
//  contains one number which is how many even number were in the list.

#include <iostream>  // Standard input / output stream library
#include <fstream>  // File stream

using namespace std;

int main(int argc, const char * argv[]) {

    if(argc < 3) { cout << "Enter input and output file names!" << endl; return -1; }

    // open input file
    ifstream fi(argv[1]);
    if(!fi) { cout << "Cannot read from input file!" << endl; return -1; }

    // open output file
    ofstream fo(argv[2]);
    if(!fo){ cout << "Cannot write to output file!" << endl; return -1; }

    // N indicates the total number of datasets
    int N;
    fi >> N;
    
    // for each dataset
    for(int i = 0; i < N; i++) {
        // M indicates the number of elements in the i-th dataset
        int M, sum = 0;
        fi >> M;
        // for each element in this dataset
        for(int j = 0; j < M; j++) {
            // read next (j-th) number and perform the operation (add to sum)
            int num;
            fi >> num;
            sum += num;
        }
        // write the answer (sum) for this dataset along with a new-line "\n" token
        fo << sum << endl;
    }

    // optional steps
    fi.close();
    fo.close();

    return 0;
}
