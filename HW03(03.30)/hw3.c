//
//  main.c
//  03.30 컴퓨터 프로그래밍 과제 2-3
//
//  Created by Byungju Chae on 2016. 3. 29..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    do {
        printf("Enter the base number: ");
        scanf("%d",&a);
    } while (a<0);
    do {
        printf("Enter the exponent number: ");
        scanf("%d", &b);
    } while (b<0);
    c = (int)pow(a, b);
    printf("%d^%d is %d\n",a,b,c);
    return 0;
}