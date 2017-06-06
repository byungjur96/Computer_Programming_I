//
//  main.c
//  05.17 컴퓨터 프로그래밍 과제 8-2
//
//  Created by Byungju Chae on 2016. 5. 17..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
int binary (int a[], int b);

int main () {
    int number, power, result;
    int originum, origipow;
    int num[16], pow[16], res[16];
    printf("Enter two integers: ");
    scanf("%d %d", &number, & power);
    originum=number;
    origipow=power;
    printf("number:\n");
    printf("    %d = ", number);
    for (int a=0; a<16; a++) {
        num[15-a]=number%2;
        number=number/2;
    }
    for (int b=0; b<8; b++) {
        printf("%d", num[b]);
    }
    printf(" ");
    for (int c=0; c<8; c++) {
        printf("%d", num[c+8]);
    }
    printf("\n");
    
    printf("pow:\n");
    printf("    %d = ", power);
    for (int a=0; a<16; a++) {
        pow[15-a]=power%2;
        power=power/2;
    }
    for (int b=0; b<8; b++) {
        printf("%d", pow[b]);
    }
    printf(" ");
    for (int c=0; c<8; c++) {
        printf("%d", pow[c+8]);
    }
        printf("\n\n");
        
        result=originum*(1<<origipow);
        printf("%d * 2^%d = %d\n", originum, origipow, result);
    printf("    %d = ", result);
        for (int a=0; a<16; a++) {
            res[15-a]=result%2;
            result=result/2;
        }
        for (int b=0; b<8; b++) {
            printf("%d", res[b]);
        }
        printf(" ");
        for (int c=0; c<8; c++) {
            printf("%d", res[c+8]);
        }

    return 0;
}