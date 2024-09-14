#include <stdio.h>
int main()
{
    int N, i = 2;
    printf("Enter N = ");
    scanf("%d", &N);
    while (i < N)
    {
        if (N % i == 0)
        {
            printf("N is not a Prime no.");
            break;
        }
        else
        {
            i++;
        }
    }
    if (i == N)
    {
        printf("N is a prime no. ");
    }

    return 0;
}