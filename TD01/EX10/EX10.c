#include <stdio.h>

int main()
{
    int num;
    unsigned long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 2; i <= num; i++) {
            printf("The iteration NB : %i\n", i-1);
            fact = fact * i;
            printf("Value of fact is %lu\n", fact);
        }
        printf("The factorial of %d is: %lu\n", num, fact);
    }

    return 0;
}