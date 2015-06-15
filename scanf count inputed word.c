#include <stdio.h>

int main() {
    int count;
    char temp[80];
    count = 0;
    while (scanf("%s", temp) == 1) {
        ++count;
    }
    printf("The number of words is %d.\n", count);
    return 0;
}