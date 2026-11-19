
#include <stdio.h>

int is_prime(int x);

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n > 10000)
    {
        printf("NG");
        return 0;
    }

    for (int number = 2; number <= n; number++)
    {
        if (is_prime(number) == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

int is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }

    for (int divisor = 2; divisor <= x / divisor; divisor++)
    {
        if (x % divisor == 0)
        {
            return 0;
        }
    }

    return 1;
}
