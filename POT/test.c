#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int i,j, n = 0;
    char *color[20], str[10], *temp;
   
    scanf("%s", str);
    while(str[0] != '#') {
        color[n] = (char *)malloc(sizeof(char)*(strlen(str)+1));  
        strcpy(color[n], str);
	    n++;
        scanf("%s", str);
    }
    for (i = n-1; i > 0; i--) 
        for (j = 0; j < i; j++) 
            if (strcmp(color[j],color[j+1])>0) {
                temp = color[j];
                color[j] = color[j+1];
                color[j+1] = temp;
            }        
    for(i = 0; i < n; i++) 
        printf("%s  ", color[i]);
    printf("\n");
}