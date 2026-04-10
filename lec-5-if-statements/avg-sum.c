#include<stdio.h>

int main(){
	
	float a,b,c,total;
	
	printf("enter Maths marks:-");
	scanf("%f",&a);
	
	printf("enter english marks:-");
	scanf("%f",&b);
	
	printf("enter science marks:-");
	scanf("%f",&c);
	
	if(a<=100 && b<=100 && c<=100){
		total = (a+b+c)/3 ; 
		printf("enter avarage marks is %f",total);
			}
		
		else{
			printf("invalid marks");
		}
}