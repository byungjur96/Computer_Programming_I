//
//  main.c
//  05.17 컴퓨터 프로그래밍 과제 8-1
//
//  Created by Byungju Chae on 2016. 5. 17..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int main () {
    int num;
    int count=0;
    printf("Enter an integer:");
    scanf("%d", &num);
    while (num>0) {
        if (num & 1)
            count++;
        num=num>>1;
    }
    
    printf("The total number of 1s in the bit representation is ");
    (count%2==0) ? printf("even\n"): printf("odd\n") ;
    return 0;
}