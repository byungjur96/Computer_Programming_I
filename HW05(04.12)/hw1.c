//
//  main.c
//  04.12 컴퓨터 프로그래밍 과제 5-1
//
//  Created by Byungju Chae on 2016. 4. 9..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int array[20];
    srand(time(NULL));
    printf("Nonrepititive array values are:\n");
    for (int i=0; i<20; i++) {
        array[i]= 1+rand()%20;
        for (int n=0; n<i; n++) {
            if(array[i]==array[n])
            {return 0;}
        }
        {printf("Array[%d] = %d\n", i, array[i]);}
    }
    return 0;
}
