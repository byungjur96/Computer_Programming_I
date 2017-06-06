//
//  main.c
//  04.06 컴퓨터 프로그래밍 과제 3-2
//
//  Created by Byungju Chae on 2016. 4. 5..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <stdio.h>

int isperfect(int a);

int main (){
    printf("For the integersfrom 1 to 1000:\n");
    for(int num=1; num<=1000;num++)
        if(isperfect(num))
            printf("%d\n",num);
    return 0;
}

int isperfect (int a) {
    int i;
    int s=0;
    for(i=1;i<a;i++){
        if(a%i==0)
            s+=i;
    }
    return a==s;
}