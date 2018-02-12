//
//  randMatrix.h
//  MatrixMultiplicationCPP
//
//  Created by Maria Teresa Chaves on 09/02/2018.
//  Copyright © 2018 Maria Teresa Chaves. All rights reserved.
//

#ifndef randMatrix_h
#define randMatrix_h

#include <iostream>
#include <cstdlib>

using namespace std;

/**
 Fills a matrix of size nxn with random numbers between 1 and 100.

 @param matrix Matrix to fill.
 @param n Size of the matrix [nxn].
 */
void randMatrix(int **matrix, int n);

#endif /* randMatrix_h */
