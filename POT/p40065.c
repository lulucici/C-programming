/*程序填空，不要改变与输入输出有关的语句。
输入一个正整数repeat (0<repeat<10)，做repeat次下列运算：
输入一个正整数 m(1<m<1000)，将 m 分解质因数。
输出使用以下语句：
printf("%d*", i);
输入输出示例：括号内为说明
输入
3        (repeat=3)
2        (m=2)
8        (m=8)
90       (m=90)
输出
2 = 2
8 = 2*2*2
90 = 2*3*3*5*/
#include "stdio.h"
#include "math.h"
int prime(int n);
int main(void)
{
    int i, k, m;
    int repeat, ri;

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &m);
        printf("%d = ", m);
        while(prime(m) == 0)
        {
        	for ( i = 2; i <= (m/2);i++)
        	{
        		if ( m % i == 0 && prime(i) == 1)
        		{
        			printf("%d*",i );
        			break;
        		}
        	}
        	m = m / i;
        }
        printf("%d\n", m);
    }
}

int prime(int n)
{
	int i,result;

	for (i = 2;i <= n / 2;i++)
	{
		if ( n % i == 0)
		{
			break;
		}
	}
	if ( i > n / 2)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return result;
}
