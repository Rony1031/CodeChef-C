#include <stdio.h>
int main()
{
    int num, value, remainder;
    printf("Enter number upto which prime numbers are to find:");
    scanf("%d", &value);
    for (num = 2; num <= value; num++)
    {
        if (num == 2)
        {
            printf("%d\n", num);
        }
        if (num != 2)
        {
            for (int i = 2; i < num; i++)
            {
                remainder = num % i;
                if (remainder != 0, i == num - 1)
                {
                    printf("%d\n", num);
                }
                if (remainder == 0)
                    break;
            }
        }
    }
}