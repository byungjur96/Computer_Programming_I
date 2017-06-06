//
//  main.c
//  06.07 컴퓨터 프로그래밍 과제 10-2
//
//  Created by Byungju Chae on 2016. 6. 7..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct linkList {
    int data;
    struct linkList * nextGen;
}ListNode;

typedef ListNode* List;

void insert(List *sPtr, int value) {
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
        while (current != NULL && newNode->data>=current->data)
        {
            if (newNode-> data==current->data)
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

List mergeFunction(List first, List second)
{
    List result = NULL;
    
    while (first != NULL || second != NULL)
    {
        if (first == NULL)
        {
            insert(&result, second->data);
            second = second->nextGen;
            
            continue;
        }
        
        if (second == NULL)
        {
            insert(&result, first->data);
            first = first->nextGen;
            
            continue;
        }
        
        if (first->data > second->data)
        {
            insert(&result, second->data);
            second = second->nextGen;
            
            continue;
        }
        
        if (first->data < second->data)
        {
            insert(&result, first->data);
            first = first->nextGen;
            
            continue;
        }
    }
    
    return result;
}

int main()
{
    List first = NULL;
    List second = NULL;
    List result;
    
    int i;
    printf("List 1 is: ");
    for (i = 2; i <= 10; i += 2)
    {
        insert(&first, i);
        printf("%d ", i);
    }
    printf("* \n");
    
    printf("List 2 is: ");
    for (i = 1; i <= 10; i += 2)
    {
        insert(&second, i);
        printf("%d ", i);
    }
    printf("* \n");
    
    result = mergeFunction(first, second);
    
    printf("The merged list is: ");
    while (result != NULL)
    {
        printf("%d ", result->data);
        result = result->nextGen;
    }
    printf("* \n");
    
    return 0;
}