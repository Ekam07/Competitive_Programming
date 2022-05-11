//Get subscription  
#include<stdio.h>                                                                                                                                 #include <stdio.h>
int main(void)
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
      int x;
      scanf("%d",&x);
      if(x<=30)
          printf("NO\n");
      else
          printf("YES\n");
  }
    return 0;
} 
