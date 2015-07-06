#include <stdio.h>
struct student
{
	int num;
	char name[10];
	int computer,math,english;
	double average;
};
double count_aver(struct student s);
int main()
{
	int i,n;
	struct student s1;
	printf("input n:\n");
	scanf("%d",&n);
	for (i = 1;i <= n;i++)
	{
		printf("NO.%d\n",i );
		scanf("%d%s%d%d%d",&s1.num,&s1.name,&s1.computer,&s1.math,&s1.english);
		s1.average = (s1.computer+s1.math+s1.english) / 3;
		printf("average:%lf\n",s1.average);
	}
}