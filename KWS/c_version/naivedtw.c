//
// Created by rick.liao on 2019/12/13.
//
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define VERY_BIG (1e30) 

int main(argc, argv)
int argc;
char *argv[];
{
    double **globdist;
    double **Dist;
    
    double top, mid, cheapest, total;
    unsigned short int **move;
    unsigned short int **warp;
    unsigned short int **temp;
    
    unsigned int i, X, Y, n, i, j, k;
    unsigned int xsize = aoti(argv[4]);
    unsigned int ysize = aoti(argv[5]);
    unsigned int params = atoi(argv[6]);
    
    unsigned int debug; /*debug flag*/
    
    float **x, **y; //two 2D float point array
    
    FILE *file1, *file2, *glob, *debug_file, *out_file;
    
    
    return 0;
}
