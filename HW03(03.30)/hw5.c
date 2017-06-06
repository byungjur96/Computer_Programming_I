//
//  main.c
//  03.30 컴퓨터 프로그래밍 과제 2-5
//
//  Created by Byungju Chae on 2016. 3. 29..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int main(void){
    double pi = 0.0;
    double num = 4.0;
    double denom = 1.0;
    long int loop;
    long int accuracy;
    
    accuracy = 900000;
    
    printf("Accuracy set at: %d\n", accuracy);
    printf("term\t\t pi\n");
    
    for(loop=1; loop<=accuracy; loop++){
        denom = num / ((double)loop * 2.0 - 1.0);
        if(loop == 1) pi = num;
        else if(loop % 2 == 0){
            pi = pi - denom;
        }
        else if(loop != 1 && loop % 2 == 1){
            pi = pi + denom;
        }
        if(loop % 50000 == 0) {
            printf("%d\t\t %.6lf\n", loop, pi);
        }
    }
    
    return 0;
}