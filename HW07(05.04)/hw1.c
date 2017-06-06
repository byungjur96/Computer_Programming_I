//
//  main.c
//  05.10 컴퓨터 프로그래밍 과제 7-1
//
//  Created by Byungju Chae on 2016. 5. 4..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char a[80];
int sum=0;

int main() {
    for (int count=0; count<4; count++) {
        printf("Enter an integer string: ");
        scanf("%s", a);
        sum += atoi(a) ;
    }
    printf("\n");
    
    printf("The total of the values is %d", sum);
    return 0;
}