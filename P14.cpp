//bucket and waterflow
#include <iostream>
using namespace std;

int main() 
{
   	int t;
   	cin>>t;
   	while(t--)
   	{
   	    int w,x,y,z;
   	    cin>>w>>x>>y>>z;
   	    if((y*z)>(x-w))
   	    {
   	        cout<<"overflow\n";
   	    }
   	    else if((y*z)==(x-w))
   	    {
   	       cout<<"filled\n"; 
   	    }
   	    else
   	    {
   	        cout<<"unfilled\n";
   	    }
   	}
	return 0;
}
