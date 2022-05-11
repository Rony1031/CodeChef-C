#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 1000)
    {
        while (t--)
        {
            int x;
            scanf("%d", &x);
            if (x >= 0 && x <= pow(10, 9))
            {
                if (x % 2 == 0 && x % 5 == 0)
                {
                    printf("0\n");
                }
                else if (x % 2 == 0 || x % 5 == 0)
                {
                    printf("1\n");
                }
                else
                {
                    printf("-1\n");
                }
            }
        }
    }
    return 0;
}