//10012
// 程序填空，不要改变与输入输出有关的语句。
// 编写一个函数，利用参数传入一个3位数number，找出101～number之间所有满足下列两个条件的数：
// 它是完全平方数，又有两位数字相同，如144、676等，函数返回找出这样的数据的个数。请同时编写主函数。
// 例：(括号内为说明)
// 输入
// 3	(repeat=3)
// 150
// 500
// 999
// 输出
// count=2
// count=6
// count=8


#include <stdio.h>
#include <math.h>
int search(int n);
int main(void)
{
	int number,ri,repeat;

	scanf("%d",&repeat);
	for(ri=1;ri<=repeat;ri++){
		do{
			scanf("%d",&number);
		}while(number<101||number>999);
		printf("count=%d\n",search(number));
	}
}

int search(int n)
{
	int i,count;
	int sq,pw;
	int b,c,d;

	count = 0;

	for (i = 101 ;i <= n; i++)
	{
		b = i/100;
		c = (i - b*100)/10;
		d = i - b*100 - c*10;
		sq=sqrt(i);
		pw=sq*sq;/*不要用pow,why?*/
		// pw=(int)pow(sq,2);
		if (pw == i
		 && (b==c || c==d || b==d))
		 {
		 	count++;
		 }
	}

	return count;

}