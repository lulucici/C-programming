//当x=0，y=0,当x不等于0，y=1/x
#include <stdio.h>
int main(void)
{
	double x,y;

	scanf("%lf",&x);
	if (x == 0)
	{
		y=0;
	}
	else 
		y=1/x;
	printf("f(%lf)=%.3f\n",x,y);
}