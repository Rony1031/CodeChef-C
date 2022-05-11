#include <stdio.h>
int main(void)
{
    int num, i, d, x, y, z;
    int work;

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        scanf("%d %d %d %d", &d, &x, &y, &z);
        work = (y * d + 1);
        if (work > 14)
        {
            printf("%d", work);
        }
        else{
            printf("14");
        }
    }
    return 0;
}