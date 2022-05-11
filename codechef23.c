#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 7)
    {
        while (t--)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            if (a, b, c >= 0 && a, b, c <= 1)
            {
                if ((a == 1 && (b == 0 || c == 0)) || (b == 1 && (a == 0 || c == 0)) || (c == 1 && (b == 0 || a == 0)))
                {
                    printf("1\n");
                }
                else
                {
                    printf("0\n");
                }
            }
        }
    }
    return 0;
}