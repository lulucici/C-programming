#include <stdio.h>
double p(int n, double x);
int main(void)
{
   int repeat, ri;
   int n;
   double x, result;

   scanf("%d", &repeat);
   for(ri = 1; ri <= repeat; ri++)
   {
       scanf("%d%lf", &n, &x);
       result = p(n, x);
       printf("p(%d, %.2lf)=%.2lf\n", n, x, result);
   }
}

double p(int n, double x)
{
	double result;

	if ( n == 0)
	{
		result = 1;	
	}
	else if (n == 1)
	{
		result = x;
	}
	else
	{
		result =((2*n-1)*p(n-1,x)-(n-1)*p(n-2,x))/n;
	}

	return result;
}
