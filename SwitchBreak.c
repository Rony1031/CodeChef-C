#include<stdio.h>
int main() {
    int a;

    printf("Select any number from 1 to 10\n");

    printf("Enter the number:\n");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("The number is 1");
        break;

        case 2:
        printf("The number is 2");
        break;

        case 3:
        printf("The number is 3");
        break;
        case 4:
        printf("The number is 4");
        break;

        case 5:
        printf("The number is 5");
        break;
        
        default:
        printf("your number is from 6 to 10");

    }
    return 0;
}