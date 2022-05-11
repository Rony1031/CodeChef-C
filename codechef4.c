#include <stdio.h>
int main()
{
    int t, i, a, b, c;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a > b)
        {
            if (b > c)
            {
                printf("%d\n", b);
            }
        }
        if (b > a)
        {
            if (a > c)
            {
                printf("%d\n", a);
            }
        }
        if (a > c)
        {
            if (c > b)
            {
                printf("%d\n", c);
            }
        }
        if (b > c)
        {
            if (c > a)
            {
                printf("%d\n", c);
            }
        }
        if (c > a)
        {
            if (a > b)
            {
                printf("%d\n", a);
            }
        }
        if (c > b)
        {
            if (b > a)
            {
                printf("%d\n", b);
            }
        }
    }
    return 0;
}