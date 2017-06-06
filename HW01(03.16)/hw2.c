//
//  main.c
//  연습2
//
//  Created by Byungju Chae on 2016. 3. 16..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
int main () {
    int a;
    int b;
    int c;
    printf("두 정수를 입력하세요:");
    scanf("%d%d",&a,&b);
    c=b*(b+1)/2-a*(a-1)/2;
    printf("모든 정수의 합: %d",c);
    return 0;
}