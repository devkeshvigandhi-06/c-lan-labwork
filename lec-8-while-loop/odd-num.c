#include<stdio.h>

int main(){
	
	int i=1,e;
	printf("Enter any odd number :- ");
	scanf("%d",&e);
	
	while(e>=i){
		printf("%d\n",e,i);
		e-=2;
	}
}