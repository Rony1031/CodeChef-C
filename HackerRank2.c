#include <stdio.h>
int main()
{
    char ch;
    char str1[100];
    char str2[100];

    scanf("%c\n", &ch);

    gets(str1);

    gets(str2);

    printf("%c\n", ch);
    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}