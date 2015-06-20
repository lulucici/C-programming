#include <stdio.h>
int main()
{
	int i,n,m;
	char s[10];

	printf("input the string:\n");
	i = 0;
	while ((s[i]=getchar()) !='\n')
	{
		i++;
	}
	s[i]='\0';

	for (n = 0,m = i - 1;n < m;n++,m--)
	{
		if (s[n] != s[m])
		{
			break;
		}
	}
	if (n >= m)
	{
		printf("the string is a plalindrome\n");

	}
	else 
		printf("the string is not a plalindrome\n");
}