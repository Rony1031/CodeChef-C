#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        int remainder;
        scanf("%d %d",&x,&y);
         for (int i = 0; i < y; i++)
        {
            remainder = y % x;
              x++;
            if (remainder == 0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}