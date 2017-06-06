//
//  main.c
//  04.12 컴퓨터 프로그래밍 과제 5-4
//
//  Created by Byungju Chae on 2016. 4. 12..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

void stringReverse(char strArray[]);

int main() {
    char strArray[30] = "Print this string backward.";
    printf("%s\n", strArray);
    stringReverse(strArray);
    printf("\n");
    return 0;
}

void stringReverse(char strArray[]) {
    if (strArray[0]=='\0')
        return;
    stringReverse(&strArray[1]);
    printf("%c",strArray[0]);
}