#include <stdio.h>
int main()
{
    int i, a, b, t;
    int result;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        result = a % b;
        printf("%d\n", result);
    }

    return 0;
}
