// High score
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a[4],sum=0;
	    cin>>n;
	    for(int i=0;i<4;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+4);
	    cout<<a[3]<<"\n";
	}
	return 0;
}