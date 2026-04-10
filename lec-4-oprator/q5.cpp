#include<stdio.h>

int main(){
	
	int a=5;
	int b=10;

	printf("values before swapping %d,%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("values after swapping %d,%d",a,b);
}