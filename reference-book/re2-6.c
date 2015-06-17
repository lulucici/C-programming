//温度转换表
#include <stdio.h>
int main()
{
	int fahr,lower,upper;
	double celsius;

	scanf("%d%d",&lower,&upper);
	printf("fahr celsius\n");
	for (fahr=lower; fahr <= upper; fahr++)
	{
		celsius=(5.0/9.0)*(fahr-32);
		printf("%d%6.1f\n",fahr,celsius );
	}
}