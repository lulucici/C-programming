/*函数定义与调用
函数的返回值类型 函数名（参数类型 形参名）*/
#include <stdio.h>
int sum(int n);
int main()
{
	int x,y,z;

	x = sum(100);/*调用函数sum(),100是实参*/
	printf("x=%d\n", x);
	printf("1+2+3+…+100=%d\n", sum(100));

	x = 10;
	y = 100;
	z = sum(x)*2 + sum(y/2);
	printf("z=%d\n", z);

	z = sum(sum(4));
	printf("z=%d\n", z);
}

int sum(int n)
{
	int i,x=0;
	for (i = 1; i <= n; ++i)
	{
		x += i;
	}
	return x;
}
