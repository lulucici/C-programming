//利用数组计算斐波那契数列的前10个数，按每行5个的顺序打出
#include <stdio.h>
int main()
{
	int i;
	int fib[10]={1,1};

	for (i = 2; i < 10; i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}

	for (i = 0; i < 10; i++)
	{
		printf("%4d",fib[i]);
		if ((i+1)%5 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}