#include <stdio.h>

int main()
{
    int S = 0;

    for (int i = 1; i <= 10; i++) { // i++ eq to i = i + 1
        printf("The iteration NB : %i\n", i);
        S = S + i; // eq S += i
        printf("Value of i is %i, and S is %i\n", i, S);
    }

    printf("The sum is: %d\n", S);

    return 0;
}