#include <stdio.h>
int main()
{
	int i,n ,m,gcd;

	scanf("%d%d",&n,&m);

	for (i = n ; i >= 1;i = i-1)
	{
		if ( n % i == 0)
		{
			if ( m % i == 0)
			{
				gcd = i;
			}
			else
			{
				break;
			}
		}
		else 
		break;
	}
	printf("%d\n",gcd);
}