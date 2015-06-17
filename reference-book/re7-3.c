//find the number who is same as x in array ,and input the smallest index.
#include <stdio.h>
int main(void)
{
	int i,flag,x;
	int a[5];

	printf("input a:\n");
	for (i = 0;i < 5;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("input x:\n");
	scanf("%d",&x);
	flag = 0;
	for (i = 0;i < 5;i++)
	{
		if (a[i] == x)
		{
			printf("Smallest index of the same number is %d\n",i);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("Not found!\n");
	}

	return 0;
}