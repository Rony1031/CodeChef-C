#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    printf("%d", a);
                }
            }
        }

        if (b > a)
        {
            if (b > c)
            {
                if (b > d)
                {
                    printf("%d", b);
                }
            }
        }

        if (c > a)
        {
            if (c > b)
            {
                if (c > d)
                {
                    printf("%d", c);
                }
            }
        }

        if (d > b)
        {
            if (d > c)
            {
                if (d > a)
                {
                    printf("%d", d);
                }
            }
        }
    }

    return 0;
}