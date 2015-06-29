#include <stdio.h>
void swap2(int *,int *);
void bubble(int a[],int n);
int main()
{
	int i,n,a[8];

	printf("input n:\n");
	scanf("%d",&n);
	for(i = 0;i < n;++i)
	{
		scanf("%d",&a[i]);
	}

	bubble(a,n);

	for (i = 0;i < n;++i)
	{
		printf("%d ",a[i] );
	}
}


void bubble(int a[],int n)
{
	int i,j,t;

	for(i = 1;i < n ;i++)
	{
		for (j = 0;j < n - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1]=t;
			}
		}
	}
}