#include<stdio.h>
int main() {
	int g,c,i;
	int num,result;

	scanf("%d", &num);

	for(i=0; i<num;i++){
		scanf("%d %d", &g,&c);
		result=c*c;
		printf("%d", (result)/(2*g));

	}


	return 0;
}