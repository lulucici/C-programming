/*程序填空，不要改变与输入输出有关的语句。
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：
输入一个正整数 n(0<n<=9)和一组(n个)有序的整数，再输入一个整数 x，把 x 插入到这组数据中，使该组数据仍然有序。
输入输出示例：括号内为说明
输入：
4               (repeat=4) 
5               (数据的个数n=5)
1 2 4 5 7       (5个有序整数)
3               (待插入整数x=3)
4               (数据的个数n=4)
1 2 5 7	        (4个有序整数)
-10             (待插入整数x=-10)
3               (数据的个数n=3)
1 2 4	        (3个有序整数)
100             (待插入整数x=100)
5               (数据的个数n=5)
1 2 4 5 7       (5个有序整数)
4               (待插入整数x=4)
输出：
1 2 3 4 5 7 
-10 1 2 5 7 
1 2 4 100 
1 2 4 4 5 7 */
#include <stdio.h>
int main(void)   
{
    int i, j, n, x,temp;
    int repeat, ri;
    int a[10];

    scanf("%d", &repeat);
    for(ri = 1; ri <= repeat; ri++){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        a[n] = x;
        for (j = 0;j < n;j++)
        {
            if ( a [j] >= a [n])
            {
                temp = a[j];
                a[j] = a[n];
                a[n] = temp;
            }
        }
        for(i = 0; i < n + 1; i++)
            printf("%d ", a[i]);
        putchar('\n');   
    }
}

