#include<stdio.h>

int main(){
	
	float a;
	
	printf("enter any value:-");
	scanf("%f",&a); 
	
	if(a<0){
		printf("this number is negative");
	}
	
    else if(a==0){
    	printf("this number is neutral");
	}
	
	else{
		printf("this number is postive");
	}
}