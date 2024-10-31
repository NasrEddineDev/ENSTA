#include <stdio.h>

int main()
{
    int N, S = 0;

    printf("Enter a number N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        S = S + i;// <==> S += i;
    }

    printf("The sum is S = %d\n", S);

    return 0;
}