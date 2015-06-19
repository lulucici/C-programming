#include <stdio.h>
int main()
{
	int a[6][6];
	int n,i,j,temp;

	printf("input n:\n");
	scanf("%d",&n);

	printf("input a:\n");
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			a[i][j]=i*n+j+1;	
		}
	}

	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			if ( i <= j)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}

	for(i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");

	}
}