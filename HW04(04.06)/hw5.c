//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-5
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flip();

int main(int argc, char *argv[])
{
    int result[2] = {0,}, i, re;
    srand(time(NULL));

    for(i=1;i<=100;i++)
    {
        re = flip();
        printf("%s ", re==0?"Heads":"Tails");
        result[re]++;
        
        if(i%10==0){
            printf("\n");
        }
    }
    
    printf("Heads:%d\n", result[0]);
    printf("Tails%d\n", result[1]);
    return 0;
}

int flip()
{
    return rand()%2;
}