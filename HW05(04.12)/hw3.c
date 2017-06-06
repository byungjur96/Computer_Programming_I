//
//  main.c
//  04.12 컴퓨터 프로그래밍 과제 5-3
//
//  Created by Byungju Chae on 2016. 4. 12..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void function(int m1[][6], int m2[][6], int res[][6])
{
    for(int j = 0; j<5; j++){
        for(int i=0; i<6; i++){
            res[j][i] = m1[j][i] + m2[j][i];
            printf("%4d ", res[j][i]);
        }
        
        printf("\n");
    }
}

int main () {
    srand(time(NULL));
    int matrix1[5][6];
    int matrix2[5][6];
    int result[5][6];
    
    printf("matrix1:\n");
    for(int j=0; j<5; j++) {
        for (int i=0; i<6; i++) {
            matrix1[j][i] = 1+rand()%100;
            printf("%4d ", matrix1[j][i]);
        }
        printf("\n");
    }
    printf("matrix2:\n");
    for(int j=0; j<5; j++) {
        for (int i=0; i<6; i++) {
            matrix2[j][i] = 1+rand()%100;
            printf("%4d ", matrix2[j][i]);
        }
        printf("\n");
    }
    printf("result:\n");
    
    function(matrix1, matrix2, result);
    
    return 0;
    
}