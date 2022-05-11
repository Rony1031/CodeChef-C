#include <stdio.h>
int main()
{
    int a;

    printf("Enter the number\n");
    scanf("%d", &a);

    do
    {
        if (a == 15)
        {
            a = a + 1;
            continue;
        }
        printf("Value of a:%d\n", a);
        a++;
    } while (a <= 20);
    return 0;
}