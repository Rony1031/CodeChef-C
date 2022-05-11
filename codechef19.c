#include <stdio.h>

int main()
{
    int t, d, n, c;
    int sum = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &d, &n);

        for (int i = 1; i <= d; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}