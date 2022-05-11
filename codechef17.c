#include <stdio.h>
int main()
{
    int t;
    int r1, w1, c1, r2, w2, c2;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &r1, &w1, &c1);
        scanf("%d %d %d", &r2, &w2, &c2);

        if (r1 > r2)
        {
            if (w1 > w2 || w1 < w2)
            {
                if (c1 > c2)
                {
                    printf("A\n");
                    continue;
                }
            }
        }
        if (r1 > r2 || r1 < r2)
        {
            if (w1 > w2)
            {
                if (c1 > c2)
                {
                    printf("A\n");
                    continue;
                }
            }
        }
        if (r1 > r2)
        {
            if (w1 > w2)
            {
                if (c1 > c2 || c1 < c2)
                {
                    printf("A\n");
                    continue;
                }
            }
        }
        if (r2 > r1)
        {
            if (w2 > w1 || w2 < w1)
            {
                if (c2 > c1)
                {
                    printf("B\n");
                    continue;
                }
            }
        }
        if (r2 > r1)
        {
            if (w2 > w1)
            {
                if (c2 > c1 || c2 < c1)
                {
                    printf("B\n");
                    continue;
                }
            }
        }
        if (r2 > r1 || r2 < r1)
        {
            if (w2 > w1)
            {
                if (c1 > c2)
                {
                    printf("B\n");
                    continue;
                }
            }
        }
    }
    return 0;
}