#include <stdio.h>
#include <string.h>

int getNum(char ch) {
	return ch - '0';
}

int numToString(int num) {

	int result;
	int numToChar(int num);

	if ( (num / 10) != 0)
	{
		numToString( num / 10);
		printf(" ");
		numToChar(num % 10);
	}
	else 
	{
		result = num %10;
		numToChar(result);
	}
	return 0;
}

int numToChar(int num) {
	switch(num) {
		case 0:
		printf("ling");
		break;
		case 1:
		printf("yi");
		break;
		case 2:
		printf("er");
		break;
		case 3:
		printf("san");
		break;
		case 4:
		printf("si");
		break;
		case 5:
		printf("wu");
		break;
		case 6:
		printf("liu");
		break;
		case 7:
		printf("qi");
		break;
		case 8:
		printf("ba");
		break;
		case 9:
		printf("jiu");
		break;	
		default:
		break;
	}
}

int main(int argc, char const *argv[])
{
	
	char num[100];
	scanf("%s", num);
	int sum = 0;
	int i;
	for (i = 0; i < strlen(num); ++i)
	{
		sum += getNum(num[i]);
	}

	// printf("%d\n", sum);

	numToString(sum);

	return 0;
}