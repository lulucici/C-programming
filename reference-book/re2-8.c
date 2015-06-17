//计算1-1/3+1/5-1/7……前n项和
#include <stdio.h>
int main()
{
	int i,n,denominator,flag;
	double item,sum;

	// scanf("%d",&n);
	n = 2;
	denominator=1;
	flag=1;
	sum=0;
	for (i = 1; i <= n; i++)
	{
		item=1.0/denominator;
		sum=sum+flag*item;
		denominator=denominator+2;/*i用来标记循环次数，所以不破坏i*/
		flag=-flag;
	}
	printf("sum=%lf\n",sum );

}