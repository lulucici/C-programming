#include <stdio.h>
int main()
{
	int i,a[10],n;
	void reverse(int *p,int n);

	printf("input n:\n");
	scanf("%d",&n);
	for (i = 0;i < n;++i)
	{
		scanf("%d",&a[i]);
	}

	reverse(a,n);

	for (i = 0; i < n; ++i)
	{
		printf("%d ",a[i]);
	}
}

void reverse(int *p,int n)
{
	int *pj,t;

	for (pj = p + n -1;p < pj;p++,pj--)
	{
		t = *p;
		*p = *pj;
		*pj = t;
	}
}