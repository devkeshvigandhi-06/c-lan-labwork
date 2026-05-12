#include<stdio.h>

int main(){
	int n,num;
	printf("Enter any value:- ");
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0){
		printf("The given number is divisible by both 3 & 5.");
	}else{
		printf("The given number is Not divisible by both 3 & 5.");
	}

}