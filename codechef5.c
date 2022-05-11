#include<stdio.h>
int main() {
    int i,t,d,x,y,z;
    int way1, way2;

    scanf("%d", &t);
    for(i = 0; i<t; i++){
        scanf("%d %d %d %d", &d,&x,&y,&z);
        way1=(7*x);
        way2=((d*y)+((7-d)*z));
        if(way1>way2){
            printf("%d\n", way1);
        }else{
            printf("%d\n", way2);
        }

    }
    return 0;
}