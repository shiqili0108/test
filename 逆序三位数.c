#include<stdio.h>

int main(){
	
	int a=0,b=0,c=0;
	int m=0;
	
	scanf("%d",&m);
	
	a=m/100;
	c=m%10;
	b=m%100/10;
	
	printf("%d\n",c*100+b*10+a);
	
	return 0;
	}
