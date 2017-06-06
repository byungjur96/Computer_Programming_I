//
//  main.c
//  06.07 컴퓨터 프로그래밍 과제 10-3
//
//  Created by Byungju Chae on 2016. 6. 7..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

typedef struct stackNode {
    int data;
    struct stackNode * nextPtr;
} Stack;
typedef Stack* Stack1;


void push(Stack1 *topPtr, int info);
int pop(Stack1 *topPtr);
int isEmpty(Stack1 topPtr);
void printStack(Stack1 currentPtr);
void instructions(void);

int main(void) {
    Stack1 stackPtr = NULL;
    int choice;
    int value;
    
    instructions();
    printf("? ");
    scanf("%d", &choice);
    
    while (choice != 3) {
        
        switch (choice) {
                
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &value);
                
                push(&stackPtr, value);
                printStack(stackPtr);
                break;
                
            case 2:
                if (!isEmpty(stackPtr))
                {
                    pop(&stackPtr);
                }
                printStack(stackPtr);
                break;
                
            default:
                printf("Invalid choice.\n\n");
                instructions();
                break;
        }
        
        printf("? ");
        
        scanf("%d", &choice);
    }
    
    printf("End of run.\n");
    return 0;
    
}

void push(Stack1 *topPtr, int info) {
    Stack1 newNode = malloc(sizeof(Stack));
    newNode->data = info;
    newNode->nextPtr = *topPtr;
    
    *topPtr = newNode;
}
int pop(Stack1 *topPtr) {
    Stack1 temp = *topPtr;
    int value = temp->data;
    
    (*topPtr) = (*topPtr)->nextPtr;
    free(temp);
    
    return value;
}
int isEmpty(Stack1 topPtr) {
    return topPtr == NULL;
}
void printStack(Stack1 currentPtr) {
    
    if (currentPtr == NULL) {
        printf("The stack is empty.\n\n");
    }
    else {
        printf("The stack is:\n");
        while (currentPtr != NULL) {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}
void instructions(void) {
    printf("Enter choice:\n"
           "1 to push a value on the stack\n"
           "2 to pop a value off the stack\n"
           "3 to end program\n");
}