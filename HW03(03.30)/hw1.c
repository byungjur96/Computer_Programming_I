//
//  main.c
//  03.30 컴퓨터 프로그래밍 과제 2-1
//
//  Created by Byungju Chae on 2016. 3. 27..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int main (){
    int a, b=1, max;
    printf("Enter the number:");
    scanf("%d", &a);
    max=a;
    do {
    printf("Enter the number:");
    scanf("%d",&a);
    if (max<a)
        max=a;
    b++;
    } while(b<5);
    printf("Largest is %d \n", max);
    return 0;
}

