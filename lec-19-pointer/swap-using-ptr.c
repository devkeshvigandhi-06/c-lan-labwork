#include<stdio.h>

int main(){
	int a,b;
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	
	printf("Values before swapping: ");
	printf("%d and %d",a,b);
	
	int *ptr;
	int *ptr2;
	ptr=&a;
	ptr2=&b;
	
	*ptr=a+b;
	*ptr2=a-b;
	*ptr=a-b;
	
	printf("\nValues after swaping: ");
	printf("%d and %d",a,b);
	
}