#include <stdio.h>
int main()
{
	int i,number;
	char str[10];

	printf("input a string:\n");
	i = 0;
	while(( str[i] = getchar() ) != '\n')
	{
		i++;
	}
	str[i] = '\0';

	number = 0;
	for ( i = 0 ; str[i ] != '\0' ; i++ )
	{
		if ( str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + str[i]-'0';
		}
	}

	printf("digit=%d\n", number);
}