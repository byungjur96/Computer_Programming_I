//
//  main.c
//  05.10 컴퓨터 프로그래밍 과제 7-2
//
//  Created by Byungju Chae on 2016. 5. 4..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char arr[3][80];
int alphabet[26] = { 0 };
int main() {
    char *ptr = NULL;
    
    printf("Enter three lines of text:\n");
    fgets((arr[0]), 80, stdin);
    fgets((arr[1]), 80, stdin);
    fgets((arr[2]), 80, stdin);
    printf("The total occurrences of each character:\n");
    for (int a = 0; a<3; a++) {
        for (int j = 0; arr[a][j] != NULL; j++) {
            if (arr[a][j] >= 'A' && arr[a][j] <= 'Z')
                arr[a][j] += 32;
        }
        
        for (char i = 'a'; i <= 'z'; i++) {
            ptr = strchr(arr[a], i);
            while (ptr != NULL) {
                alphabet[i - 'a'] += 1;
                ptr = strchr(ptr + 1, i);
            }
        }
    }
    for (char b = 'a'; b <= 'z'; b++)
        printf("%c: %3d\n", b, alphabet[b - 'a']);
    return 0;
}