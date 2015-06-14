//统计节目编号为1-8的节目得到的票数
#include <stdio.h>
int main()
{
	int count[9];
	int i,response;

	for (i = 1; i < 9; ++i)
	{
		count[i]=0;
	}

	for (i = 0; i < 10; ++i)
	{
		printf("input the response\n");
		scanf("%d",&response);
		if (response >=1 && response <= 8)
		{
			count[response]++;
		}
		else
			printf("invaild response\n");
	}

	printf("result:\n");
	for (i = 1; i < 9; ++i)
	{
		printf("%4d%4d\n",i,count[1] );
	}

	return 0;
}