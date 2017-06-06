//
//  main.c
//  05.10 컴퓨터 프로그래밍 과제 7-3
//
//  Created by Byungju Chae on 2016. 5. 9..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char a[80];
    char *context = NULL, *token;
    int length[20] = {0};
    printf("Enter three lines of text:\n");
    for (int k = 0; k < 3; k++) {
        fgets(a, 80, stdin);
        token = strtok_r(a, " .,!?", &context);
        do {
            length[strlen(token)] += + 1;
            token = strtok_r(NULL, " .,!?", &context);
        } while (token != NULL);
    }
    for (int i = 1; i < 20; i++) {
        if (length[i] != 0) {
            if (length[i] == 1) {
                printf("%d word of length %d\n", length[i], i);
            }
            else
                printf("%d words of length %d\n", length[i], i);
        }
    }
    return 0;
}