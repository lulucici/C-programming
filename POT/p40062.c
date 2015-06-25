/*程序填空，不要改变与输入输出有关的语句。
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
输入1个实数 x，计算并输出下式的值，直到最后一项的绝对值小于0.00001(保留2位小数)。要求定义和调用函数fact(n)计算n的阶乘，可以调用pow函数求幂。
s = x＋x*x/2!＋x*x*x/3!＋x*x*x*x/4!＋……
输入输出示例：括号内为说明
输入
3     (repeat=3)
0     (x=0)
1     (x=1)
0.1   (x=0.1)
输出
s = 0.00
s = 1.72
s = 0.11*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int i;
    int repeat, ri;
    double item, s, x; 
    double fact(int n);

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++)
    {
       	 scanf("%lf", &x);
    	 i = 1;
    	 s = 0;
       	 do
       	 {
       	 	item = pow(x,i)/fact(i);
       	 	s = s + item;
       	 	i = i + 1;
       	 	/*printf(" item = %lf,s = %lf,i =%d\n",item,s,i );*/
       	 }while(item >= 0.00001);
      	printf("s = %.2f\n", s);
    }
}

double fact(int n)
{
	double result;
	int i;

	result = 1;
	for (i = 1;i <= n;i++)
	{
			result = result * i;
	}
	/*printf("fact = %lf\n", result);*/
	return result;
}