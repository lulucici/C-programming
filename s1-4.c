/*求1+2+……+100的和*/
/*循环结构*/
#include <stdio.h>
int main()
{
	int i,sum;
	i=1;
	sum=0;
	// while(i<=100){
	// 	sum=sum+i;
	// 	i=i+1;
	// }
	for ( i = 1; i <= 100; ++i)
	{
		sum += i;
	}
	printf("sum=%d\n",sum);
}