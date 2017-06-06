//
//  main.c
//  05.10 컴퓨터 프로그래밍 과제 7-4
//
//  Created by Byungju Chae on 2016. 5. 10..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[10][30];
    for (int i = 0; i < 10; i++) {
        printf("Enter a string: ");
        scanf("%s", arr[i]);
    }
    for (int i = 0; i < 10; i++)
        for (int j = i; j>0; j--)
            if (strcmp(arr[j], arr[j - 1])<0) {
                char temp[30];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j - 1]);
                strcpy(arr[j - 1], temp);
            }
    printf("The string in sorted order are:\n");
    for (int i = 0; i < 10; i++)
        printf("%s\n", arr[i]);
    return 0;
}