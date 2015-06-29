#include <stdio.h>
int main()
{
	int year,yearday,month,day;
	void month_day(int year,int yearday,int *pmonth,int *pday);

	printf("input year and yearday:\n");
	scanf("%d%d",&year,&yearday);
	month_day(year,yearday,&month,&day);
	printf("%d-%d-%d\n",year,month,day);

}

void month_day(int year,int yearday,int *pmonth,int *pday)
{
	int k,leap;
	int tab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31},
	};

	leap = (year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0;

	for (k = 1;yearday > tab[leap][k];k++)
	{
		yearday = yearday - tab[leap][k];
	}

	*pmonth = k;
	*pday = yearday;
}