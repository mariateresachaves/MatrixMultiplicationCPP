//
//  main.cpp
//  MatrixMultiplicationCPP
//
//  Created by Maria Teresa Chaves on 06/02/2018.
//  Copyright © 2018 Maria Teresa Chaves. All rights reserved.
//

#include <iostream>
#include <ctime>

#include "randMatrix.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // Matrices dimensions [nxn]
    int n = 10;
    
    // Result matrices inicialization
    int **result1;
    result1 = new int *[n];
    for(int i = 0; i <n; i++)
        result1[i] = new int[n];
    
    int **result2;
    result2 = new int *[n];
    for(int i = 0; i <n; i++)
        result2[i] = new int[n];
    
    // Matrices to operate inicialization
    int **matrix_A;
    matrix_A = new int *[n];
    for(int i = 0; i <n; i++)
        matrix_A[i] = new int[n];
    
    int **matrix_B;
    matrix_B = new int *[n];
    for(int i = 0; i <n; i++)
        matrix_B[i] = new int[n];
    
    // Fill 2 matrices with random values between 1 and 100
    randMatrix(matrix_A, n);
    randMatrix(matrix_B, n);
    
    clock_t begin1 = clock();
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                result1[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    
    clock_t end1 = clock();
    
    clock_t begin2 = clock();
    
    for(int i=0; i<n; i++) {
        for(int k=0; k<n; k++) {
            for(int j=0; j<n; j++) {
                result2[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }
    
    clock_t end2 = clock();
    
    cout << "--- 1st Time: " << (end1-begin1)/double(CLOCKS_PER_SEC) << "seconds ---" << endl;
    cout << "--- 2st Time: " << (end2-begin2)/double(CLOCKS_PER_SEC) << "seconds ---" << endl;
    
    return 0;
}
