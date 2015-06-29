#include <stdio.h>
int main()
{
	int i,a[10],*p;
	long sum = 0;

	printf("inter 10 numbers:\n");
	for (i = 0; i < 10; ++i)
	{
		scanf("%d",&a[i]);
	}

	for (i = 0;i < 10;++i)
	{
		sum = sum + a[i];
	}

	printf("calculated by array,sum is %ld\n",sum );

	sum = 0;
	for (p = a ;p <= a +9 ;p++)
	{
		sum = sum + *p;
	}

	printf("calculated by pointer,sum is %ld\n",sum );
}

//use pointer to calculate sum