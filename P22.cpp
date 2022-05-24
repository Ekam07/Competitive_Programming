//XOR palindrome
#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    
   int i, count = 0;
        for( i=0; i<n/2 ; i++)
        {
        
            if(str[i] != str[n-1-i]) {
                //int p = str[i]^str[j];
                //str[i] =str[j] = p;
                count++;
            }
    }
    int c= (count+1)/2;
	 cout<<c<<endl;   
	    
	}
	return 0;
}
