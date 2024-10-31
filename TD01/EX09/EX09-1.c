#include <stdio.h>

int main()
{
    int N, S = 0, i = 1;

    printf("Enter a number N: ");
    scanf("%d", &N);

    while (i <= N)
    {
        S = S + i;
        i = i + 1;
    }

    printf("The sum is: %d\n", S);

    return 0;
}