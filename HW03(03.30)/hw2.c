//
//  main.c
//  03.30 컴퓨터 프로그래밍 과제 2-2
//
//  Created by Byungju Chae on 2016. 3. 29..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, num, number=0;
    printf("Decimal    Binary\n");
    do {
        printf("%02d          ", number);
        a = 0;
        a = number%2==1 ? a+1 : a;
        num=number/2;
        a = num%2==1 ? a+10 : a;
        num=num/2;
        a = num%2==1 ? a+100 : a;
        num=num/2;
        a = num%2==1 ? a+1000 : a;
        printf("%04d\n", a);
        number++;
    } while (number<16);
    return 0;
}
