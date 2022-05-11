#include<stdio.h>
int main() {
    int n;
    int marks[n];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d", &marks[i]);
    }
    for(int i=1;i<=n;i++){
        printf("%d marks %d\n",i,marks[i]);
    }
    return 0;
}