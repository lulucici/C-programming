//输入year，month，day，计算对应的是该年的第几天。
#include <stdio.h>
int day_of_year(int year,int month,int day);
int main()
{
	int year,month,day;

	printf("input year,month,day:\n");
	scanf("%d%d%d",&year,&month,&day);

	printf("The day is the %dth day of the year\n",day_of_year(year,month,day));
}
int day_of_year(int year,int month,int day)
{
	int k,leap;
	int tab[2][13] = {
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
	//如果是闰年，leap=1，否则=0
	leap = ((year % 4 == 0 && year % 400 != 0) || year % 400 == 0);

	for (k = 1; k < month;k++)
	{
		day=day+tab[leap][k];
	}

	return day;
}