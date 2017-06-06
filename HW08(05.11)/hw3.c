//
//  main.c
//  05.17 컴퓨터 프로그래밍 과제 8-3
//
//  Created by Byungju Chae on 2016. 5. 17..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

void reverseBit (int number, int a[], int b[]);

int main () {
    int input, reversed=0;
    int origi[16]={0};
    int reverse[16]={0};
    int calcul[16]={0};
    printf("Enter an unsigned integer: ");
    scanf("%d", &input);
    printf("\n");
    printf("Before bits are reversed:\n");
    printf("    %d = ", input);
    reverseBit (input, origi, reverse);
    for (int a=0; a<8; a++) {
        printf("%d", origi[a]);
    }
    printf(" ");
    for (int b=0; b<8; b++) {
        printf("%d", origi[b+8]);
    }
    printf("\n\n");
    for (int a=0; a<16; a++) {
        calcul[a]=reverse[15-a]<<a;
        reversed+=calcul[a];
    }
    printf("After bits are reversed:\n");
    printf("    %d = ", reversed);
    for (int a=0; a<8; a++) {
        printf("%d", reverse[a]);
    }
    printf(" ");
    for (int b=0; b<8; b++) {
        printf("%d", reverse[b+8]);
    }
    return 0;
}
     

void reverseBit (int number, int a[], int b[]) {
    for (int x=0; x<16; x++) {
        a[15-x]=number%2;
        b[x]=a[15-x];
        number=number/2;
    }
}
