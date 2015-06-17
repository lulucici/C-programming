//input n(1~10),and n ints,print them in order from small to big
#include <stdio.h>
int main()
{
	int i,index,k,n,temp;
	int a[10];

	printf("input n:\n");
	scanf("%d",&n);

	printf("input a:\n");
	for (i = 0; i <= n-1; i++)
	{
		scanf("%d",&a[i]);
	}

	for (k = 0; k <= n-2; k++)
	{
		index=k;
		for (i = k+1; i <= n-1;i++)
		{
			if (a[i]<a[index])
			{
				index = i;/*find the index of the smallest number*/
			}
			temp = a [index];
			a[index] = a[k];
			a[k] = temp;
		}
	}

	for (i = 0; i <= n-1 ; i ++)
	{
		printf("%d ",a[i] );
	}
	return 0;
}