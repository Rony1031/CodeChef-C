#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int r, p,c;
    scanf("%d %d", &r, &p);
    c=sum(r, p);
    printf("%d", c);
    return 0;
}