//用格雷戈里公式计算π的近似值 π/4=1-1/3+1/5-1/7+…… 
//输入精度e，精确到最后一项的绝对值小于e；
#include <stdio.h>
#include <math.h>
double funpi(double e);
int main()
{
	double e,pi;

	scanf("%lf",&e);
	// e=0.0001;
	pi = funpi(e);
	printf("pi = %lf\n",pi );
}

double funpi(double e)
{
	int denominator,flag;
	double item,sum;

	denominator=1;
	flag=1;
	item=1.0;
	sum=0;

	while (item >= e)
	{
		item=1.0/denominator;
		sum=sum+flag*item;
		denominator=denominator+2;
		flag=-flag;

	}

	return sum*4;
}