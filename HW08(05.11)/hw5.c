//
//  main.c
//  05.17 컴퓨터 프로그래밍 과제 8-5
//
//  Created by Byungju Chae on 2016. 5. 17..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct wordutility {
    char word[20]; // Store the unique word
    int count; // Store the number of occurrences
    int isWritten; // Indicate whether the word is
    
}text;



int main(void) {
    text wrd[100];
    char string[80];
    char *context = NULL;
    char *token;
    int b = 0;
    int isNew = 1;
    
    for(int i=0;i<100;i++)
        wrd[i].count=0;
    
    printf("Enter three lines of text:\n");
    for (int k = 0; k < 3; k++) {
        fgets(string, 80, stdin);
        token = strtok_r(string, " .,!?'\n'", &context);
        
        while (token != NULL) {
            for (int i = 0; i <= b; i++) {
                if (strcmp(token, wrd[i].word) == 0) {
                    wrd[i].count++;
                    isNew = 0;
                    break;
                }
            }
            if (isNew) {
                strcpy(wrd[b].word, token);
                wrd[b].count++;
                b++;
            }
            isNew = 1;
            token = strtok_r(NULL, " .,!?'/\n'", &context);
        }
    }
    
    for (int i = 0; i < b; i++) {
        if (wrd[i].count == 1)
            printf("\"%s\" appeared %d time\n", wrd[i].word, wrd[i].count );
        else
            printf("\"%s\" appeared %d times\n", wrd[i].word, wrd[i].count);
    }
}