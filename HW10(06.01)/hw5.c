//
//  main.c
//  06.07 컴퓨터 프로그래밍 과제 10-5
//
//  Created by Byungju Chae on 2016. 6. 7..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct stackNode {
    char data;
    struct stackNode * nextPtr;
} Stack;
typedef Stack* Stack1;

void push(Stack1 *topPtr, char info) {
    Stack1 newNode = malloc(sizeof(Stack));
    newNode->data = info;
    newNode->nextPtr = *topPtr;
    
    *topPtr = newNode;
}

int main()
{
    Stack1 stack = NULL;
    char text[1000];
    char * text1;
    
    printf("Enter a line of text: \n");
    gets(text);
    text1 = text;
    
    while ((*text1) != NULL)
    {
        push(&stack, (*text1));
        text1++;
    }
    int boolean = 0;
    text1 = text;
    while ((*text1) == (stack->data))
    {
        
        text1++;
        
        if ((*text1) == NULL && stack->nextPtr == NULL)
        {
            boolean = 1;
            break;
        }
        
        stack = stack->nextPtr;
    }
    
    if (boolean)
        printf("\"%s\" is a palindrome \n", text);
    else
        printf("\"%s\" is not a palindrome \n", text);
    
    return 0;
}