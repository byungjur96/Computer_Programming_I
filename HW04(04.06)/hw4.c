//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-4
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int reverse(int a);

int main () {
    int input;
    printf("Enter a number between 1 and 9999: ");
    scanf("%d", &input);
    
    printf("The number with its digits reversed is: %d\n", reverse(input));
    
    return 0;
}

int reverse(int a) {
    int b,c,d,e;
    if(a>=1000)
    {
        b=a/1000;
        c=(a-b*1000)/100;
        d=(a-b*1000-c*100)/10;
        e=a-b*1000-c*100-d*10;
        return e*1000+d*100+c*10+b;
    }
    else if(a>=100)
    {
        b=a/100;
        c=(a-b*100)/10;
        d=(a-b*100-c*10);
        return d*100+c*10+b;
    }
     else if(a>=10)
    {
        b=a/10;
        c=(a-b*10);
        return c*10+b;
    }
    else
        return a;
    return 1;
}