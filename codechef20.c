#include <stdio.h>

int main() {
	int t,d,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&d,&n);
	    while(d--)
	    {
	        n=(n*(n+1))/2;
	    }
	    printf("%d\n",n);
	}
	
	return 0;
}
