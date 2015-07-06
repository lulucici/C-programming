#include <stdio.h>
struct student 
{
	int id;
	char name[10];
	int computer,math,english;
	double average;
};

int update_score()
int main()
{
	int i,n;
	struct student s[50];
	printf("input n:\n");
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		printf("input the infomation of student NO.%d\n",i );
		printf("input id:\n");
		scanf("%d",&s[i-1].id);
		printf("input name:\n");
		scanf("%s",&s[i-1].name);
		printf("input score of computer,math,english:\n");
		scanf("%d%d%d",&s[i-1].computer,&s[i-1].math,&s[i-1].english);
	}

	
}