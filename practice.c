#include <stdio.h>
int main()
{
	int a_i[10],b_j[10],c[100],n,i,j,k;

	printf("input n:\n");
	scanf("%d",&n);

	printf("input a_i:\n");
	for (i = 0;i < n;i++)
	{
		scanf("%d",&a_i[i]);
	}

	printf("input b_j\n");
	for (j = 0;j < n;j++)
	{
		scanf("%d",&b_j[j]);
	}

	for (i = 0; i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			for (k = 0; k < n*n;k++)
			{
				c[k]=a_i[i]+b_j[j];
			}
		}
	}
}