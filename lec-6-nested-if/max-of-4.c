#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter the first value :-");
	scanf("%d",&a);
	
	printf("Enter the second value :-");
	scanf("%d",&b);
	
	printf("Enter the third value :-");
	scanf("%d",&c);
	
	printf("Enter the fourth value :-");
	scanf("%d",&d);
	
	if(a>=b){
		//a is max
		if(a>=c){
			printf("%d is max",a);
			
		}else{
			printf("%d is max",c);
		}
		if(a>=d){
			printf("%d is max",a);
			
		}else{
			printf("%d is max",d);	
		}
		
	}else{
		//b is max
		if(b>=c){
			printf("%d is max",b);
		}else{
			printf("%d is max",c);
		}
		
		if(b>=d){
			printf("%d is max",b);
			
		}else{
			printf("%d is max",d);
			
		}
		
	}
}