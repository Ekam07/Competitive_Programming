//circular track 
#include<stdio.h> 
#include<stdlib.h>                                                                                                                                 #include <stdio.h>
int min(int a,int b);
int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,m;
        scanf("%d %d %d",&a,&b,&m);
        c= min(abs(b-a),abs(m-abs(b-a)));
        printf("%d\n",c);
    }
    return 0;
}
int min(int a,int b)
{
    return((a>b)?b:a);
}   