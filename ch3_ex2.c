#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

   
    /*
    Displays i in decimal form;
    i is right-justified (3 blank spaces);
    i is left-justified (3 blank spaces);
    i is right-justified with minimum of 3 digits (2 blank spaces); 
    */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

   /*
    10 characters overall with 3 digits before&after the decimal for x (3 blank spaces); 
    x in exponential form (1 blank space);
    left-justified (4 blank spaces);
   */
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x, x);
    
    return 0;
}
