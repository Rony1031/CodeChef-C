#include<stdio.h>
int main() {
    int a,b;
    scanf("%d\n",&a);
    scanf("%d\n",&b);

    if(a>=1){
        if(a==1){
            printf("one\n");
        }
        if(a==2){
            printf("two\n");
        }
        if(a==3){
            printf("three\n");
        }
        if(a==4){
            printf("four\n");
        }
        if(a==5){
            printf("five\n");
        }
        if(a==6){
            printf("six\n");
        }
        if(a==7){
            printf("seven\n");
        }
        if(a==8){
            printf("eight\n");
        }
        if(a==9){
            printf("nine\n");
        }
        if(a>9){
            if(a%2==1){
                printf("nine\n");
            }
        }
    }

    if(b>=1){
        if(b==1){
            printf("one\n");
        }
        if(b==2){
            printf("two\n");
        }
        if(b==3){
            printf("three\n");
        }
        if(b==4){
            printf("four\n");
        }
        if(b==5){
            printf("five\n");
        }
        if(b==6){
            printf("six\n");
        }
        if(b==7){
            printf("seven\n");
        }
        if(b==8){
            printf("eight\n");
        }
        if(b==9){
            printf("nine\n");
        }
        if(b>9){
            if(b%2==1){
                printf("nine\n");
            }
        }
    }
    if(a%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    if(b%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
    return 0;
}