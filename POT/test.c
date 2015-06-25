#include <stdio.h>
double fact(int n);
double multi(int n);
int main()
{
	double item;
    int i,j;
            scanf("%d",&i);
            j = 2i + 1;
            printf("%d\n",j );
             item = multi(j);

             printf("%lf\n",item );

	
}

double fact(int n)
{
    double result;
    int i;

    if (n == 0)
    {
        result = 1;
    }
    else
    {
        result = 1;
        for (i = 1;i <= n; i++)
        {
            result = result * i;
        }
    }
    return result;
    
}

double multi(int n)
{
    double result;
    int i;

    if ( n == 0)
    {
        result = 1;
    }
    else
    {
        result = 1;
        for (i = 1;i <=  n; i = i + 2)
        {
            result = result * i;
        }
    }
    return result;
}
