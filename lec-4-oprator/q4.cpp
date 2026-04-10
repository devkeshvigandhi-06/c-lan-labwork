#include<stdio.h>

int main(){
	
	int a=5;
	int b=10;
	int c=15;
	
	printf("values before swapping %d,%d",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("values after swapping %d,%d",a,b);
}