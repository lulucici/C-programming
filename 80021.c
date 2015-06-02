#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[80], max[80];
    int i;

    scanf("%s", str);
    i=1;
    strcpy(max, str);
    while (i<5) {
    	scanf("%s", str);
    	strcpy(max, strcmp(max, str)>0?max:str);
    	i++;
    }
    printf("Max is: %s\n", max);
}   