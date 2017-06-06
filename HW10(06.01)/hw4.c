//
//  main.c
//  06.07 컴퓨터 프로그래밍 과제 10-4
//
//  Created by Byungju Chae on 2016. 6. 7..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct linkList {
    char data;
    struct linkList * nextGen;
}ListNode;

typedef ListNode* List;

void insert(List *sPtr, char value) {
    List newNode = malloc(sizeof(ListNode));
    List current = *sPtr;
    List previous = NULL;
    
    newNode->data = value;
    newNode->nextGen = NULL;
    
    if (current == NULL)
    {
        *sPtr = newNode;
    }
    
    else
    {
        while (current != NULL && newNode->data >= current->data)
        {
            if (newNode->data == current->data)
            {
                return;
            }
            
            previous = current;
            current = current->nextGen;
        }
        
        newNode->nextGen = current;
        if (previous != NULL)
            previous->nextGen = newNode;
        else
            *sPtr = newNode;
    }
}

void push(List *topPtr, char info) {
    List newNode = malloc(sizeof(ListNode));
    newNode->data = info;
    newNode->nextGen = *topPtr;
    
    *topPtr = newNode;
}

int main()
{
    List origin = NULL;
    List reverse = NULL;
    
    int i;
    
    for (i = 0; i < 10; i++)
    {
        insert(&origin, 'A'+i);
        push(&reverse, 'A'+i);
    }
    
    List temp = origin;
    printf("The list is: \n");
    while (temp != NULL)
    {
        
        printf("%c ", temp->data);
        temp = temp->nextGen;
    }
    
    temp = reverse;
    printf("*\n\nThe list in reverse is: \n");
    while (temp != NULL)
    {
        printf("%c ", temp->data);
        temp = temp->nextGen;
    }
    printf("* \n");
    
    return 0;
}