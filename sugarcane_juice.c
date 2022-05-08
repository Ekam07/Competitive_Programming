#include <stdio.h>
int main() 
{
	int t;
    scanf("%d",&t);
	while(t--){
	    int N;
	    scanf("%d",&N);
	    int tCost = N*50;
	    int profit =tCost - ((tCost*1/5)+(tCost*1/5)+(tCost*3/10));
	    printf("%d",profit);
	}
	return 0;
}