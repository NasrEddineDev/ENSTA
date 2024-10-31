#include <stdio.h>

int main()
{
    int S = 0, i = 1;  

    printf("Initial value of i is %i, and S is %i\n", i, S);
    while (i <= 10) {
        printf("The iteration NB : %i\n", i);
        S = S + i; 
        i = i + 1;
        printf("Value of i is %i, and S is %i\n", i, S);
    }

    printf("The sum S is: %d\n", S);

    return 0;
}