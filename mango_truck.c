#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z,n;
	    scanf("%d %d %d",&x,&y,&z);
	    n = (z-y)/x;
	    printf("%d\n",n);
	}
	return 0;
}
