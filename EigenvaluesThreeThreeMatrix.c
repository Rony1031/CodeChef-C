#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d\n",&arr[i]);
        }
        for(int i=0;i<n;i++){
           printf("%d\n",arr[i]);
        }
    }
    return 0;
}