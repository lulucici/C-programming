//计算圆柱的体积
#include <stdio.h>
#include <math.h>


int main()
{
	double radius,height;
	double cylinder(double r,double h);

	scanf("%lf%lf",&radius,&height);
	printf("volume is %lf\n", cylinder(radius,height));
}

double cylinder(double r,double h)
{
	double volume;
	volume=3.1415926*pow(r,2)*h;

	return volume;
}