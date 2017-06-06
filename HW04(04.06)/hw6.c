//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-6
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
int Cnt;
void hanoi(int num, int from, int to, int temp)
{
    if(num==1)
    {
        printf("Move %d, move from Fall%d, to Fall%d\n", num, from, to);
    }
    else
    {
        temp=6-from-to;
        hanoi(num-1, from, temp, to);
        printf("Move %d, move from Fall%d, to Fall%d\n", num, from, to);
        hanoi(num-1, temp, to, from);
    }
    Cnt++;
}
int main()
{
    int num;
    printf("Enter the starting number of the disks: ");
    scanf("%d", &num);
    hanoi(num, 1, 2, 3);
    printf("Count : %d\n",Cnt);
    return 0;
    
}