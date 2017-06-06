//
//  main.c
//  05.03 컴퓨터 프로그래밍 과제 6-5
//
//  Created by Byungju Chae on 2016. 5. 3..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand (time(NULL));
    int arr[10];
    for (int i=0; i<10; i++) {
        *(arr+i) = rand() % 100 +1;
        printf("%d ", *(arr+i));
    }
    printf("\n");
    for (int j=9; j>=0; j--) {
        printf("%d ", *(arr+j));
    }
    printf("\n");
    return 0;
}