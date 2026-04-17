#include<stdio.h>

int main(){
	
	int a=0,b=1,c,n;
	printf("Enter any number :- ");
	scanf("%d",&n);
	
	for(a; a<=n; ){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}