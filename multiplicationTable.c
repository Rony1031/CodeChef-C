#include<stdio.h>
int main() {
    int a;
    int i;
    printf("The Multiflication table of: \n");
    scanf("%d", &a);

    printf("****The Multiflication Table****\n");

    for(i=1; i<=10;i++){
        
        printf("%d*%d=%d\n", a,i, a*i);

    }
    return 0;
}