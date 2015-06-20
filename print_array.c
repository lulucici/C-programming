#include <stdio.h>

void print_array(int n, int * a) {
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%d \n", a[i]);
	}
}



int main(int argc, char const *argv[])
{
	int n = 0;
	int a[1000];
	int temp;
	while (scanf("%d", &temp) == 1) {
		a[n] = temp;
		++n;
	}
	print_array(n, a);
	return 0;
}