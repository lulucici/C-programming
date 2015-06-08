//分段计算
#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;

	scanf("%lf",&x);
	if (x < 0)
	{
		y = pow(x,5)+2*x+1/x;
	}
	else 
		y = sqrt(x);

	printf("f(%lf)=%.2f\n",x,y);
}