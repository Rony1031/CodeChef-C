#include <stdio.h>
int main()
{
    int n, j = 0;
    int arr[n];

    scanf("%d", &n);

    if (n >= 1 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= -20 && arr[i] <= 20)
            {
                if (arr[i] < 10)
                {
                    printf("Thanks for helping Chef!\n");
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