#include<stdio.h>


int main(){
	
	int a=12;
	int b=6;
	
	printf("sum of %d and %d is %d\n",a,b,a + b);
	printf("sub of %d and %d is %d\n",a,b,a-b);
	printf("multiplication of %d is %d\n",a,b,a*b);
	printf("div of %d and %d is %d\n",a,b,a/b);
	printf("modulo of %d and %d is %d\n",a,b,a%b);
	
	printf("--------------\n");
	printf("|            |\n");
	printf("|%d * %d = %d  |\n",b,b,b*b);
	printf("|            |\n");
	printf("--------------\n");
}