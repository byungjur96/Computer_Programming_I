//
//  main.c
//  05.03 컴퓨터 프로그래밍 과제 6-1
//
//  Created by Byungju Chae on 2016. 4. 27..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

void func(int*a, int*b, int*c);

int main () {
    int a=0, b=0, c=0;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Before: a= %d, b= %d, c= %d\n", a, b, c);
    func(&a, &b, &c);
    printf("After: a= %d, b= %d, c= %d\n", a, b, c);
    return 0;
}

void func(int*a, int*b, int*c) {
    int temp;
    *a+=1;
    *b=*b**c;
    temp=*c;
    *c=*b;
    *b=temp;
}