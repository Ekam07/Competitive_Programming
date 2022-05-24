//degree of polynomial
#include <stdio.h>
int main(void)
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int n,degree=0;
       scanf("%d",&n);
       int a[n];
       for (int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           if(a[i]!=0)
           {
            degree=i;   
           }
           
       }
       printf("%d\n",degree);
   }
	return 0;
}

