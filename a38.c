#include <stdio.h>

int main()
{
	int n,c=0;
	scanf("%d",&n);
	while( n != 1)
	{
		if(n%2==0)
			n = n/2;
		else
			n = n*3 + 1;
		c++;
	}
	printf("%d",c-1);
}
