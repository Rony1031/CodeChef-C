#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter then number from 0 to 9\n");
            scanf("%d", &j);
            if (j == 2)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}