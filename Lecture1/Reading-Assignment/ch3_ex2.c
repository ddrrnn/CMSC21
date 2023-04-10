#include <stdio.h>

int main(void) {
    int i;
    float x;

    i = 40;
    x = 839.21f;

    //prints i
    //normal
    //right-justified (3 blank spaces)
    //left-justified (3 blank spaces)
    //right-justified (2 blank spaces)
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    //prints x
    //right-justified (3 blank spaces)
    //right-justified (exponential form with 1 blank space)
    //left-justified (4 blank spaces)
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x, x);

    return 0;
}