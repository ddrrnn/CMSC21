#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom; 

    printf ("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf ("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    //cross-multiplication
    result_num = num1 * denom2 + num2 * denom1;

    //getting the LCM of the fractions
    result_denom = denom1 * denom2;

    //prints out the result
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}