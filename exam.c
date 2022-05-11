#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[1000];
    FILE *fptr;
    int studytonight;
    printf("Name of your file:");
    scanf("%c", &studytonight);

    if ((fptr = fopen("studytonight.txt", "r")) == studytonight){
        printf("studytonight.txt File\n");
        printf("I am studying C programming.\n");

        exit(1);
    }else{
        printf("Your file doesn't exit");
    }

    return 0;
}