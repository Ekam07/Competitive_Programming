#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int rule = x*1.07;
	    if(rule>=y)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}