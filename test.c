#include "stdio.h"
int main(int argc, char const *argv[])
{
	int i,m,n;

	double sum;
	scanf("%d%d", &m, &n);
        sum = 0;	
        for ( i = m; i <= n; i++)
        {
        	sum = sum +1/i;
        }
        printf("%.3f\n",sum );
	return 0;
}