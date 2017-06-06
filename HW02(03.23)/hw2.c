//
//  main.c
//  03.23 컴퓨터 프로그래밍 과제 1-2
//
//  Created by Byungju Chae on 2016. 3. 22..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>

int main()
{
    int a, max=-1, min=-1;
    printf("정수를 입력하세요:");
    scanf("%d", &a);
    if ( a == -1 ) {
        printf("The largest number is : %d\n", max);
        printf("The smallest number is : %d\n", min);
        return 0;
    }
    
    max = a;
    min = a;
    
    while (a != -1) {
        printf("정수를 입력하세요:");
        scanf("%d", &a);
        
        if(a != -1)
        {
            if (a > max) max = a;
            else if (a < min) min = a;
        }
    }
    printf("The largest number is : %d\n", max);
    printf("The smallest number is : %d\n", min);
    return 0;
}