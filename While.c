#include<stdio.h>
int main() {
    int a;
    int num=0;
    printf("Enter the Number: ");
    scanf("%d",&a);
    while(num<=a){
        printf("%d\n", num);
        num=num+1;
    }
    return 0;
}