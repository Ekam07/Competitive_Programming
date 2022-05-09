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
	        for(j=0;j<n;j++)
	        {
	            if(p[i]>p[j])
	            {
	                temp=p[i];
	                p[i]=p[j];
	                p[j]=temp;
	            }
	        }
	    }
	    int k=0,m;
	    for(i=0;i<n;i++)
	    {
	        if(q[i]==p[0])
	        {
	        k++;
	        m=i;
	
	        }
	    }
	    if(k==1)
	    printf("%d\n",a[m]);
	   
	    else
	     printf("Confused\n");
	

	}
}
