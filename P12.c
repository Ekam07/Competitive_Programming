//apples and oranges
#include <stdio.h>

int main(void)
{
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(x>=(a+b))
        printf("YES");
    else
        printf("NO");
	return 0;
}

