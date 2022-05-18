//A or B
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,count1,count2;
	    cin>>x>>y;
	    count1= (500-2*x)+(1000-((x+y)*4));
	    count2= (1000-4*y)+(500-(2*(x+y)));
	    if(count1>=count2)
	     cout<<count1<<"\n";
	    else
	     cout<<count2<<"\n";
	}
	return 0;
}
