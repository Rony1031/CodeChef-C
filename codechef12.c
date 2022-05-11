#include <stdio.h>
int main()
{
    int t;
    int i, j;
    int a;
    
    scanf("%d", &t);
    while (t--)
    {   int multi = 1;
        scanf("%d", &a);
        for (a; a >= 1; a--)

        {   
            multi = multi * a;
            if(a==1){
                printf("%d\n", multi);
                break;
            }
        }
        
    }
    return 0;
}