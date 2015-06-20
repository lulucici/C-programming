#include <stdio.h>
long long fib(long long n);
long long slow_fib(long long n);

long long fib_res[101] = {0};

int main()
{
	long long n;

	scanf("%lld",&n);
	printf("f(%lld)=%lld\n",n,fib(n) );

	return 1;
}
long long fib(long long n)
{
	long long result;
	if (fib_res[n] != 0) {
		printf("Calculating fib(%lld) = %lld\n", n, fib_res[n]);

		return fib_res[n];
	} else {
		if ( n == 1 || n == 2 )
		{
			result = 1;
		} else {
			result = fib(n - 1) + fib(n - 2);
		}
		printf("Calculating fib(%lld) = %lld\n", n, result);

		fib_res[n] = result;
		return result;
	}
	
	
}

long long slow_fib(long long n) {
	long long result;
	if ( n == 1 || n == 2 )
	{
		result = 1;
	} else {
		result = slow_fib(n - 1) + slow_fib(n - 2);
	}
	printf("Calculating fib(%lld) = %lld\n", n, result);
	return result;

}