#include<stdio.h>
int min(int a, int b);
int main() 
{
	int t;
    scanf("%d",&t);
	while(t--)
    {
	    int N,x,y,a1,a2,a3,a4;
	    scanf("%d %d %d",&N,&x,&y);
	    a1=min(x-1,y-1);
	    a2=min(N-x,N-y);
	    a3=min(N-x,y-1);
	    a4 =min(x-1,N-y);
	    
	    int count = (x-1)+(y-1)+(N-x)+(N-y)+a1+a2+a3+a4;
        printf("%d",count);
	}
	return 0;
}
int min(int a,int b)
{
    return(a>b?a:b);
}