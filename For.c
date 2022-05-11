#include<stdio.h>
int main() {
    int num;
    int i;

    printf("THe multiflication Table of the number:");
    scanf("%d", &num);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",i,num,i*num);
    }
    return 0;
}