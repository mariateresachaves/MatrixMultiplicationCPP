//
//  main.cpp
//  MatrixMultiplicationCPP
//
//  Created by Maria Teresa Chaves on 06/02/2018.
//  Copyright © 2018 Maria Teresa Chaves. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 700;
    int matrix_A[n][n];
    int matrix_B[n][n];
    int result1[n][n];
    int result2[n][n];
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            matrix_A[i][j]=2;
        }
    }
    
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
