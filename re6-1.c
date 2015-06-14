//输入一个6位小写字母单词，将其转化为大写字母后，将其ASCLL码除以10取余数加密
#include <stdio.h>
int main()
{
	int i;
	char ch_lower,ch_upper;

	for(i = 1;i <= 6;i++)
	{
		scanf("%c",ch_lower);
		if (ch_lower>='a' && ch_lower<='z')
		{
			ch_upper=ch_lower-'a'+'A';
			printf("%c->%c->%d\n", ch_lower,ch_upper,ch_upper%10);
		}
	}

	return 0;
}