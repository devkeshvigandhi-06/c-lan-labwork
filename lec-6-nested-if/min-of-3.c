#include <stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter the first value");
	scanf("%d",&a);
	
	printf("Enter the second value");
	scanf("%d",&b);
	
	printf("Enter the third value");
	scanf("%d",&c);
	
	if(a<=b){
		//a is min
		if(a<=c){
			printf("%d is min",a);
		}else{
			printf("%d is min",c);
		}
		
	} else{
		
		if(b<=c){
			printf("%d is min",b);
			
		}else{
			printf("%d is min",c);
		}
		
		
	}
}