#include <stdio.h>
int main()
{
	char ch;

	printf("please input character\n");
	ch=getchar();

	while(ch != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch=ch-'A'+'a';
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch=ch-'a'+'z';
		}
		putchar(ch);
		ch=getchar();
	}

	return 0;
}