//
//  main.c
//  05.03 컴퓨터 프로그래밍 과제 6-2
//
//  Created by Byungju Chae on 2016. 5. 3..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int strcmp(const char* s1, const char* s2);

int main () {
    char string1[80];
    char string2[80];
    
    printf("Enter two strings: ");
    scanf("%s%s", string1, string2);
    printf("%s and %s are %s.\n", string1, string2, strcmp(string1, string2) ?  "equal" : "not equal");
    return 0;
}

int strcmp(const char* s1, const char* s2) {
    
    int a = 0, b = 0;
    
    while (*(s1 + a) != NULL){
        a++;
    }
    
    while (*(s2 + b) != NULL){
        b++;
    }
    
    for(int i = 0; i<a && i<b; i++)
        if (*(s1 + i) != *(s2 + i)) return 0;
    
    return 1;
}