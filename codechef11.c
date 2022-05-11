#include<stdio.h>
int main() {
    int t,a,b,c;
    int result;
    scanf("%d", &t);
    for(int i=0; i<t;i++){
    scanf("%d %d %d",&a,&b,&c);
     result=a+b+c;
     if(result==180){
         printf("YES\n");
     }else{
         printf("NO\n");
     }
    }
    return 0;
}