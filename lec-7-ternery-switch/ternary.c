#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("enter the first value :-");
	scanf("%d",&a);
	printf("enter the second value :-");
	scanf("%d",&b);
	printf("enter the third value :- ");
	scanf("%d",&c);
	
	(a<=b)?
	    (a<=c)
	    	?printf("%d",a)
	    	:printf("%d",c)
	    	
	    	
	    :(b<=c)
	    	?printf("%d",b)
	    	:printf("%d",c);
}