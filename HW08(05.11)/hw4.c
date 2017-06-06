//
//  main.c
//  05.17 컴퓨터 프로그래밍 과제 8-4
//
//  Created by Byungju Chae on 2016. 5. 17..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//
#include<string.h>
#include<stdio.h>


struct student {
    char name[80];
    int stdnum;
};

int main(void) {
    
    struct student student[6];
    
    int i, j;
    char str[6][100], order[6];
    char *token;
    char *context = NULL;
    
    for (i = 1; i <= 5; i++) {
        printf("<%d> Enter student name / student number: ", i);
        gets(str[i]);
        order[i] = i;
        
        token = strtok_r(str[i], "/", &context);
        strcpy(student[i].name, token);
        
        token = strtok_r(NULL, "/", &context);
        
        student[i].stdnum = atoi(token);
    }
    
    printf("\nID\t\t\tName\n");
    
    for (i = 1; i < 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            if (student[order[j]].stdnum > student[order[j + 1]].stdnum) {
                int hold = order[j];
                order[j] = order[j + 1];
                order[j + 1] = hold;
            }
        }
    }
    
    for (i = 1; i <= 5; i++)
        printf("%d\t\t%s\n", student[order[i]].stdnum, student[order[i]].name);
    
    return 0;
}