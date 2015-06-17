//输出5行数字金字塔
#include <stdio.h>
void pyramid(int n);
int main()
{
	pyramid(5);
}
void pyramid(int n)
{
	int i,j;

	for (i = 1;i <= n;i++)
	{
		for (j = 1;j <= n-i; j++)
		{
			printf(" ");
		}
		for (j = 1;j <= i;j++)
		{
			printf("%d ",i );
		}
		printf("\n");
	}

}