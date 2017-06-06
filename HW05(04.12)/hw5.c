//
//  main.c
//  04.12 컴퓨터 프로그래밍 과제 5-5
//
//  Created by Byungju Chae on 2016. 4. 12..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    int i, j;
    printf("matrix:\n");
    int matrix[5][5];
    srand(time(NULL));
    for(j=0; j<5; j++) {
        for (i=0; i<5; i++) {
            matrix[j][i] = 1+rand()%100;
            printf("%4d ", matrix[j][i]);
        }
        printf("\n");
    }
    printf("\nresult:\n");
    int result[5][5];
    for(j=0; j<5; j++) {
        for (i=0; i<5; i++) {
            result[j][i]=matrix[4-i][j];
            printf("%4d ", result[j][i]);
        }
        printf("\n");
    }
}