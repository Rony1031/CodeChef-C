#include <stdio.h>
int takenumber()
{
    int a;
    printf("Enter the numbe\n");
    scanf("%d", &a);
    return a;
}
int main()
{
    int c;
    c = takenumber();
    printf("The number is %d", c);
    return 0;
}