#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        long long int b[n];
        for(int i=0;i<n;i++){
            scanf("%d", &b[i]);
        }
         
        int count=0;
        
       
        
        for(int i=1;i<n;i++){
            
            if(a[i]-a[i-1]>=b[i]){
                count++;
            }
            
        }
        
        if(a[0]>=b[0]){
            count++;
        }
    
        
        printf("%d\n",count);

    }
    return 0;
}