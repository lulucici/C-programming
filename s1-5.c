/*输入a，b，输出较大者；输入m，n，输出较大者*/
#include <stdio.h>
int max(int x,int y);
int main(void)
{
	int a,b,max_ab;
	int m,n,max_mn;

	scanf("%d%d",&a,&b);
	max_ab=max(a,b);
	printf("max_ab=%d\n",max_ab);
	scanf("%d%d",&m,&n);
	max_mn=max(m,n);
	printf("max_mn=%d\n",max_mn);
}

int max(int x,int y)/*定义一个函数max，x，y是参数*/
{
	int z;/*内部定义一个变量*/

	if (x>=y)
	{
		z=x;
	}
	else 
		z=y;

	return z;
}
