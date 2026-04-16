#include<stdio.h>

int main(){
	
	int i=2,e;
	printf("Enter any number :- ");
	scanf("%d",&e);
	do{
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}while(i<=e);
}