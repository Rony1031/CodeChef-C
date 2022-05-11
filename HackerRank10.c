#include <stdio.h>
int main()
{
    int n;
    int arr[n];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        
        sum = sum + arr[i];
        if(i==n){
            printf("%d", sum);
            break;
        }
    }
    
    return 0;
}