#include<stdio.h>
int main() {
    int a,b;
    int result1, result2;

    scanf("%d\n",&a);
    scanf("%d\n",&b);

    result1=a+b;
    result2=a-b;

    printf("%d\n",result1);

    if(result2<0){
        printf("%d\n",(-1)*result2);
    }
    else{
        printf("%d\n", result2);
    }

    return 0;
}