#include <stdio.h>

int main(void)
{
printf("TABLE OF POWERS OF TWO\n\n");
printf("n\t");
printf("2 to the n\n");
printf("---\t");
printf("-----------\t");

int i = 0, n = 1;

while(i <= 10)
{
    printf("\n%2d\t%6d", i, n);
    n*=2;
    i++;
    }
    return 0;
}