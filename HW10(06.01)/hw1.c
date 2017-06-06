//
//  main.c
//  06.07 컴퓨터 프로그래밍 과제 10-1
//
//  Created by Byungju Chae on 2016. 6. 7..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>


typedef struct listNode {
    char data;
    struct listNode * nextGen;
} ListNode;

typedef ListNode* List;

void insert(List *sPtr, char value);
char delete(List *sPtr, char value);
int isEmpty(List currentPtr);
void printList(List currentPtr);
void instructions(void);

int main(void) {
    
    List startPtr = NULL;
    int choice;
    char character;
    
    instructions();
    printf("? ");
    scanf("%d", &choice);
    
    while (choice != 3) {
        
        switch (choice) {
                
            case 1:
                printf("Enter a character: ");
                scanf("\n%c", &character);
                
                printf("value : %c\n", character);
                insert(&startPtr, character);
                
                break;
                
            case 2:
                if (!isEmpty(startPtr)) {
                    
                    printf("Enter character to be deleted: ");
                    scanf("\n%c", &character);
                    
                    if (delete(&startPtr, character))
                    {
                        printf("%c is deleted\n", character);
                        printList(startPtr);
                    }
                    
                    
                }
                else {
                    printf("List is empty.\n\n");
                }
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

void instructions(void) {
    
    printf("Etner your choice:\n"
           "	1 to insert an element into the list.\n"
           "	2 to delete an element from the list.\n"
           "	3 to end.\n");
}

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
                printf("Already Exist! \n\n");
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
    
    printList(*sPtr);
}

char delete(List *sPtr, char value) {
    List current = *sPtr;
    List previous = NULL;
    
    while (current->data != value)
    {
        if (current->nextGen == NULL)
        {
            printf("%c is not found!\n\n", value);
            return 0;
        }
        previous = current;
        current = current->nextGen;
    }
    char temp = current->data;
    
    if (previous != NULL)
        previous->nextGen = current->nextGen;
    else
        *sPtr = current->nextGen;
    free(current);
    
    return temp;
}

int isEmpty(List sPtr) {
    return sPtr == NULL;
}

void printList(List currentPtr) {
    if (currentPtr == NULL) {
        printf("List is empty.\n\n");
    }
    else {
        printf("The list is:\n");
        
        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextGen;
        }
        printf("NULL\n");
    }
}