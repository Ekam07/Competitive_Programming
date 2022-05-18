//recent contest problem
#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,i,count1=0,count2=0;
      cin>>n;
      string a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]=="START38")
          {
              count1++;
          }
          else
          count2++;
      }
      cout<<count1<<"  "<<count2<<"\n";
  }
	return 0;
}