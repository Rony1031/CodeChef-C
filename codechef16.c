#include <stdio.h>
int main()
{
    int t, i, j;
    int r1, w1, c1, r2, w2, c2;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d %d", &r1, &w1, &c1);
        int sum1 = 0;
        sum1 = r1 + w1 + c1;
        for (j = 0; j < t; j++)
        {
            scanf("%d %d %d", &r2, &w2, &c2);
            int sum2 = 0;

            sum2 = r2 + w2 + c2;
            if (sum1 > sum2)
            {
                printf("A\n");
                break;
            }
            else
            {
                printf("B\n");
                break;
            }
        }
    }
    return 0;
}