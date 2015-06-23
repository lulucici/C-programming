/*程序填空，不要改变与输入输出有关的语句。
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
读入1个正实数 eps，计算并输出下式的值，精确到最后一项的绝对值小于 eps(保留6位小数)。请使用 while 语句实现循环。
计算：1－1/4＋1/7－1/10＋1/13－1/16＋……
输入输出示例：括号内是说明
输入
2        (repeat=2)
2E-4     (eps=2E-4)
0.02      (eps=0.02)
输出
sum = 0.835549
sum = 0.826310*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int denominator, flag;
    int repeat, ri;
    double eps, item, sum;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        	scanf("%le", &eps);
        	sum = 0;
        	flag = 1;
        	denominator = 1;
        	item = 1;
        	while( item >= eps)
        	{
        		item = (double)1 / denominator;
        		sum = sum + flag * item;
        		denominator = denominator + 3;
        		flag = -flag;
        	}
	printf("sum = %.6f\n", sum);
   }
}