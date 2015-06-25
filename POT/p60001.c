/*程序填空，不要改变与输入输出有关的语句。
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
输入精度eps，根据下式求 PI 的值，直到最后一项小于eps。
PI/2＝1＋1/(1*3)＋2!/(1*3*5)＋3!/(1*3*5*7)＋...＋n!/(1*3*5*...*(2n+1))
要求定义并调用函数 fact(n)计算 n!，函数形参n的类型是int，函数类型是double；定义并调用函数 multi(n)计算 1*3*5*...*n，函数形参n的类型是int，函数类型是double。
输入输出示例：括号内是说明
输入：
2           (repeat=2)
1E-6        (eps=1E-6)
1E-5        (eps=1E-5)
输出示例：
PI = 3.14159
PI = 3.14158*/
#include <stdio.h>
double fact(int n);
double multi(int n);	
int main(void)
{	
    int i; 
    int repeat, ri;
    double eps, sum, item;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%le", &eps);
        sum = 0;
        i = 0;
        do
        {
        	item = fact(i)/multi(2*i+1);
        	sum = sum + item;
        	i = i + 1;
        }while( item >= eps);
        printf("PI = %0.5f\n", 2 * sum);
    }

}

double fact(int n)
{
	double result;
	int i;

	if (n == 0)
	{
		result = 1;
	}
	else
	{
		result = 1;
		for (i = 1;i <= n; i++)
		{
			result = result * i;
		}
	}
	return result;
	
}

double multi(int n)
{
	double result;
	int i;

	if ( n == 0)
	{
		result = 1;
	}
	else
	{
		result = 1;
		for (i = 1;i <=  n; i = i + 2)
		{
			result = result * i;
		}
	}
	return result;
}
