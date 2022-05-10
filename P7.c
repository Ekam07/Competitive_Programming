#include <stdio.h>
int main() {
	int t,i,j,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n],b=0,p[n],q[n];
	    for(i=0; i<n; i++)
	    {
	       scanf("%d",&a[i]);
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        b=0;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            b++;
	        }
	        q[i]= p[i]=b;
	    }
	    
	    int temp;
	    for(i=0;i<n;i++)
	    {
			if(p[i]>p[0])
			{
				p[0]=p[i];
			}
	    }
	    int count=0,m;
	    for(i=0;i<n;i++)
	    {
	        if(q[i]==p[0])
	        {
	        count++;
	        m=i;
	
	        }
	    }
	    if(count==1)
	    printf("%d\n",a[m]);
	   
	    else
	     printf("Confused\n");
	

	}
}
