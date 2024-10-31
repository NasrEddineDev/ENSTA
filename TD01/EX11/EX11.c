#include <stdio.h>

int main()
{
     int M, N, gcd = 1, i = 1;

    printf("Enter the first integer M: ");
    scanf("%d", &M);
    printf("Enter the second integer N: ");
    scanf("%d", &N);

    while (i <= M && i <= N) {
        printf("Iteration NB : %i\n", i);
        if (M % i == 0 && N % i == 0) {
            gcd = i;
        }
        i = i +1;
    }

    printf("The GCD of %d and %d is: %d\n", M, N, gcd);

    return 0;
}