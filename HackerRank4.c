#include<stdio.h>
int main() {
    int a,b;

    scanf("%d\n", &a);
    scanf("%d\n", &b);

    switch(a){
        case 0:
        printf("zero\n");
        break;


        case 1:
        printf("one\n");
        break;

        case 2:
        printf("second\n");
        break;

        case 3:
        printf("three\n");
        break;

        case 4:
        printf("four\n");
        break;

        case 5:
        printf("fifth\n");
        break;

        case 6:
        printf("six\n");
        break;

        case 7:
        printf("seven\n");
        break;

        case 8:
        printf("eight\n");
        break;

        case 9:
        printf("nine\n");
        break;

    }
    

      switch(b){
        case 0:
        printf("zero\n");
        break;


        case 1:
        printf("one\n");
        break;

        case 2:
        printf("second\n");
        break;

        case 3:
        printf("three\n");
        break;

        case 4:
        printf("four\n");
        break;

        case 5:
        printf("fifth\n");
        break;

        case 6:
        printf("six\n");
        break;

        case 7:
        printf("seven\n");
        break;

        case 8:
        printf("eight\n");
        break;

        case 9:
        printf("nine\n");
        break;

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