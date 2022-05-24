//practise makes us perfect
#include <stdio.h>
int main()
{
	int p[4],count=0;
	for(int i=0;i<4;i++)
	{
	    scanf("%d",&p[i]);
	    if(p[i]>=10)
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}