//
//  main.c
//  05.03 컴퓨터 프로그래밍 과제 6-4
//
//  Created by Byungju Chae on 2016. 5. 3..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main() {
    int(*func[3])(int, int) = {add, sub, mul};
    char operator[3] = {'+','-','*'};
    size_t select;
    int n1, n2;
    int result;
    
    printf("0.Addition\n");
    printf("1.Substraction\n");
    printf("2.Multiplication\n");
    printf("3.End\n");
    printf("select the operation: ");
    scanf("%d", &select);
    if (select == 3) {
        printf("\nExit\n");
        return 0;
    }
    else if(select == 0 || select == 1 || select == 2) {
        printf("Enter the two numbers: ");
        scanf("%d %d", &n1, &n2);
        printf("\n");
        result = (*func[select])(n1, n2);
        printf("%d %c %d = %d\n", n1, operator[select], n2, result);
    }
}

int add(int n1, int n2){
    return (n1+n2);
}
int sub(int n1, int n2){
    return (n1-n2);
}
int mul(int n1, int n2){
    return (n1*n2);
}
