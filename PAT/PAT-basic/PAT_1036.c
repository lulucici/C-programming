#include <stdio.h>
void border(int n,int c)
{
	int i;
	for (i = 1;i <= n;i++)
	{
		printf("%c",c);
	}
	printf("\n");
}
void center(int n,int c)
{
	int i;
	for (i = 1;i <= n;i++)
	{
		if (i == 1 || i == n)
		{
			printf("%c",c);
		}
		else
			printf(" ");
	}
	printf("\n");
}
int main(int argc, char const *argv[])
{
	int N;
	char C;
	int i;
	scanf("%d %c",&N,&C);

	for (i = 1; i <= (N+1)/2; ++i)
	{
		if (i ==1 || i == (N+1)/2)
		{
			border(N,C);
		}
		else{
			center(N,C);
		}
	}
	return 0;
}