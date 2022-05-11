#include <stdio.h>

long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main()
{
    int t;
    int number;
    long fact;

    scanf("%d", &t);

    while (t--)
    {

        scanf("%d", &number);
        fact = factorial(number);
        printf("%ld\n", fact);
    }

    return 0;
}