#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,sum;
	i=1;
	sum=0;
	for(i=1;1<=100;i++)
	{
		sum=sum+i;
		printf("i=%d,sum=%d\n",i,sum);
	}
	return 0;
}
