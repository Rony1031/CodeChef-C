#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, reversed = 0, remainder, original;

        scanf("%d", &n);
        original = n;

        while (n != 0)
        {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }

        if (original == reversed)
            printf("wins\n");
        else
            printf("loses\n");
    }
    return 0;
}