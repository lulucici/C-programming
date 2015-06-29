#include <stdio.h>
int main()
{
    int a = 1,b = 2;
    int *pa = &a,*pb = &b;

    void swap1(int x,int y),swap2(int *px,int *py),swap3(int *px,int *py);


}

void swap1(int x,int y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

void swap2(int *px,int *py)
{
    
}