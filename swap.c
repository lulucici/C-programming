#include <stdio.h>

void true_swap(int * a, int * b) { // aa =a, bb =b <=> *aa = *a
	*a = *a + *b; // *aa = *aa + *bb <=> *a = *a + *b
	*b = *a - *b;
	*a = *a - *b;
	// Destroy aa, bb
}

void swap(int a, int b) { // aa = a, bb = b
	a = a + b; // aa = aa + bb
	b = a - b; // ...
	a = a - b;
	// destroy aa, bb
}

int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Before: %d, %d\n", a, b);
	swap(a, b);
	printf("After: %d, %d\n", a, b);
	true_swap(&a, &b);
	printf("End: %d, %d\n", a, b);
	return 0;
}