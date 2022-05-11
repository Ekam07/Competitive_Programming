//chef gives party  
#include<stdio.h>                                                                                                                              #include <stdio.h>
int main(void) 
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int N,X,K;
         scanf("%d %d %d",&N,&X,&K);
         if(K>=(N*X))
            printf("YES\n");
         else
            printf("NO\n");
     }
    return 0;
} 
