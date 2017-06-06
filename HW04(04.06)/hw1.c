//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-1
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double hypotenuse(double a, double b);
double a, b, c;

int main (void) {
    printf("Enter the sides of the triangles:");
    scanf("%lf%lf", &a, &b);
    printf("hypoteuse:");
    printf("%.1lf\n", hypotenuse(a,b));
    return 0;
    
}

double hypotenuse(double a, double b){
    c=sqrt((a*a)+(b*b));
    return c;
}