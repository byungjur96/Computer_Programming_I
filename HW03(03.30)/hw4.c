#include <stdio.h>

int main() {
     for (int i=1; i<=5; i++)
     {
         for(int x=0;x<5-i;x++)
         {
             printf(" ");
         }
         for(int y=0;y<2*i-1;y++)
         {
            printf("*");
         }
         printf("\n");
     }
     for (int j=1; j<=4; j++)
     {
         for(int x=0;x<j;x++)
         {
             printf(" ");
         }
         for(int y=0;y<9-2*j;y++)
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
}
