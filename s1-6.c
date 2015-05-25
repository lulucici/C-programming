/*输入float型变量a，b的值，计算c=a/b ，若b=0 则输出divided by zero*/
#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f%f",&a,&b);
	if (b != 0)
	{
		c = a / b;
		printf("c=%f\n",c);
	}/*复合语句*/
	else
		printf("divided by zero\n");
}