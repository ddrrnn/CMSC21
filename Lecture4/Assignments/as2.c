#include <stdio.h>

int main(void) {
    int i;

    //option A
    i = 11;
    while (i < 10) {
        printf("%d", i);
        i++;
    }
    printf("\n\n");
    //option B
    i = 11;
    for (; i < 10;) {
        printf("%d", i);
        i++;
    }
    printf("\n\n");
    //option C
    i = 11;
    do {
        printf("%d", i);
        i++;
    } while (i < 10);

    return 0;
}