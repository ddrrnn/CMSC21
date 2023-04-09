#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom; 

    printf ("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf ("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

   //cross-multiply: multiply the numerator of each fraction by the denominator of the other
    result_num = num1 * denom2 + num2 * denom1;

    //get the LCM of both fractions
    result_denom = denom1 * denom2;

    //printing results
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}