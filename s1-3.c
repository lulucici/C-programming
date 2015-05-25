/*求x，y的max*/
#include <stdio.h>
int main()
{
	int x,y,max;
	scanf("%d%d",&x,&y);
	if(x>=y)
		max=x;
	else
		max=y;
	printf("max=%d\n",max);
}
/*分支结构*/