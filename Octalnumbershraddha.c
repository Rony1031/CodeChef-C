#include <stdio.h>
void isoctal()
{
    int isoctal;
    clrscr();
    if (isoctal == 0)
        printf("NO");
    printf("Octal");
    return 0;
}
int main()
{
    long int no;
    int dig;
    printf("\nEnter the number:");
    scanf("%d", &no);
    while (no > 0)
    {
        dig = no % 8;
        if (dig > 7);
            
        break;
        no /= 8;
    }
    return 0;
}