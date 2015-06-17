//there is an array a with 10 elements,
//and the number is put in order from small to big.
//input x and find it in a,print its index;if none ,print not found.
#include <stdio.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int low,high,mid,x,n=10;

	printf("input x:\n");
	scanf("%d",&x);

	low = 0;
	high = n-1;
	while (low <= high)
	{
		mid = ( low + high )/2;
		if (x == a[mid])
		{
			break;
		}
		else if ( x < a[mid])
		{
			high = mid -1;
		}
		else 
		{
			low = mid +1;
		}
	}

	if ( low <= high)
	{
		printf("index of the number is %d\n",mid );
	}
	else
	{
		printf("not found\n");
	}

	return 0; 
}