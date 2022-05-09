#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,h;
        scanf("%d %d",&x,&h);
        if(x>=h)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    }
	return 0;
}

