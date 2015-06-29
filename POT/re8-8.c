#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,a[10],n;
	void reverse(int a[],int n);

	printf("input n:\n");
	scanf("%d",&n);
	printf("input 10 nums:\n");	
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}

	reverse(a,n);

	for (i = 0;i < n;++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void reverse(int a[],int n)
{
	int i,temp;

	for (i = 0;i <= n/2;i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n -1 - i] = temp; 
	}
}