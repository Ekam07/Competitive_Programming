//chess rating
#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,count=0;
	    scanf("%d %d",&x,&y);
	    if(x==y && x>y)
	      printf("%d",count);
	    else
	    {
	    while(x<y)
	    {
	      count++;
	      x=x+8;
	    }
	    printf("%d\n",count);
	    }
	}
	return 0;
}
