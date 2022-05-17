//problems in to do list
#include <iostream>
using namespace std;

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>=1000)
               count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}
