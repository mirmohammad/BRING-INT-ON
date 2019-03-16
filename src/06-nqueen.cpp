//
//  06-nqueen.cpp
//  A solution to n-queen problem in C++
//
//  Created by Mirmohammad Saadati on 2019-03-14.
//  Copyright © 2019 Mirmohammad Saadati. All rights reserved.
//

#include <iostream>  // Standard input / output stream library
#define N 4  // Size of chessboard

using namespace std;

// check for possible queen attacks :D
bool check(int b[N][N], int row, int col) {
    int i ,j;
    for(i = 0; i < row; i++)
        if(b[i][col])
            return false;
    for(i = row, j = col; i >=0 && j < N; i--, j++)
        if(b[i][j])
            return false;
    for(i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if(b[i][j])
            return false;
    return true;
}

// recursive n queen function
bool NQ(int b[N][N], int row) {
    if(row == N)
        return true;
    int col;
    for(col = 0; col < N; col++)
        if(check(b, row, col)) {
            b[row][col] = 1;
            if(NQ(b, row + 1))
                return true;
            b[row][col] = 0;
        }
    return false;
}

int main(int argc, const char * argv[]) {
    int b[N][N] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    // if can solve for this setup? print the chessboard
    if(NQ(b, 0))
        for(int i = 0; i < N; i++)
            printf("%d, %d, %d, %d\n", b[i][0], b[i][1], b[i][2], b[i][3]);
    return 0;
}

