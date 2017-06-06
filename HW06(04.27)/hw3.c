//
//  main.c
//  05.03 컴퓨터 프로그래밍 과제 6-3
//
//  Created by Byungju Chae on 2016. 5. 3..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

void func (char*s1, char*s2);

char string1[80];
char string2[80];

int main () {
    printf("Enter two strings: ");
    scanf("%s %s", string1, string2);
    func(string1, string2);
    printf("%s", string1);
}

void func (char*s1, char*s2) {
    while (*s1 != '\0') {
        s1++;
    }
    while (*s2 != '\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
}