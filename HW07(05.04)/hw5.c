//
//  main.c
//  05.10 컴퓨터 프로그래밍 과제 7-5
//
//  Created by Byungju Chae on 2016. 5. 10..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    char arr[50][20];
    char a[80];
    char *context = NULL, *token;
    int b = 0;
    int c[50] = { 0 };
    int isNew = 1;
    
    printf("Enter three lines of text:\n");
    for (int k = 0; k < 3; k++) {
        fgets(a, 80, stdin);
        token = strtok_r(a, " .,!?'\n'", &context);
        
        while (token != NULL) {
            for (int i = 0; i <= b; i++) {
                if (strcmp(token, arr[i]) == 0) {
                    c[i] = c[i] + 1;
                    isNew = 0;
                    break;
                }
            }
            if (isNew) {
                strcpy(arr[b], token);
                c[b] = c[b] + 1;
                b++;
            }
            isNew = 1;
            token = strtok_r(NULL, " .,!?'/\n'", &context);
        }
    }
    for (int i = 0; i < b; i++) {
        if (c[i] == 1)
            printf("\"%s\" appeared %d time\n", arr[i], c[i] );
        else
            printf("\"%s\" appeared %d times\n", arr[i], c[i]);
    }
}