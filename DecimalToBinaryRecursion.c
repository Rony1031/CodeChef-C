#include<stdio.h>


void binary(int n){
   if(n==0){
       return;
   }else
     binary(n/2);
     printf("%d",n%2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("Decimal To Binary:\n");
    binary(n);
    return 0;
}
//Code by Rony10