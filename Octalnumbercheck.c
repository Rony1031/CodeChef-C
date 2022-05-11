#include <stdio.h>
int main()
{
    long int a;
    int result;

    printf("Enter the number:\n");
    scanf("%d", &a);

    while (a > 0)
    {
        result = a % 10;
        a = a / 10;

        if (result > 7)
        {
            printf("Number is not Octal number\n");
            break;
        }
    }
    return 0;
}