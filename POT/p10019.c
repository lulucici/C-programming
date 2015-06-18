#include <stdio.h>
double fun(int n, double x);
int main(void)
{
	int n;
	double x, root; 

    	scanf("%lf%d", &x,&n);
  	root = fun(n, x);
 	printf("Root = %0.2f\n", root);
}  
double fun(int n,double x)
{
	double result;

	if ( n >= 2 )
	{
		result = x*fun(n -1,x);
	}
	else
		result = x;

	return result;
}
