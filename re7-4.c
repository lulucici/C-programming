//input n(1~10) and input n numbers,put them into array a.print the smallest and its index;exchange the first and the smallest,print the n numbers after exchanging.
#include <stdio.h>
int main()
{
	int i,index,n;
	int a[10];/*the number of a must be decided when declare it,as max n is 10,so int 10 a*/

	printf("input n:\n");
	scanf("%d",&n);

	printf("input %d number:\n",n);
	for (i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}

	index = 0;
	for (i = 1; i < n; i++)
	{
		if (a[i] < a[index])
		{
			index = i;
		}
	}
	printf("min is %d,its index is %d\n", a[index],index);

	{
		int temp;

		temp = a[index];
		a[index] = a[0];
		a[0] = temp;
		for (i = 0; i < n;i++)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}