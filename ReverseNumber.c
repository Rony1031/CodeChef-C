#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    gets(str);
    int n=strlen(str);
    printf("Original number: %s\n", str);
    printf("After Revesing Number:");
    for(int i=n-1;i>=0;i--){
        printf("%c", str[i]);
    }

   return 0;
}