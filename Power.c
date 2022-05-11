#include<stdio.h>
#include<math.h>
int main() {
    int a;
    int b;
    int result;

    printf("Enter the value of a:\n");
    scanf("%d", &a);

    printf("Enter the value of b:\n");
    scanf("%d", &b);

    result=pow(a,b);

    printf("The value of a^b is %d\n", result);
    return 0;
}