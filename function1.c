#include<stdio.h>

void printstar(int n){
    for(int i=0;i<n;i++){
        printf("%c", '*');
    }
}
int main() {
     int a;
     scanf("%d", &a);
     printstar(a);
    return 0;
}