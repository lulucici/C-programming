#include <stdio.h>
#include <string.h>
#define MAXLINE 100
void encrypt(char *);
int main()
{
	char line[MAXLINE];

	printf("input the string:\n");
	gets(line);
	encrypt(line);
	printf("%s\n",line );
}

void encrypt(char *s)
{
	for ( ; *s != '\0';s++ )
	{
		if ( *s == 'z')
		{
			*s = 'a';
		}
		else
			*s = *s + 1;
	}
}