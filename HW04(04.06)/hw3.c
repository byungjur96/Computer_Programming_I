//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-3
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int ulcase(char a);
int main () {
    char input;
    printf("Enter the character:");
    scanf("%c",&input);
    printf("%c: %s\n", input, ulcase(input) == 1 ? "uppercase" : "lowercase");
    
    return 0;
}

int ulcase(char a) {
    if(a>='A'&&a<='Z')
    {return 1;}
    else
    {return 0;}
}