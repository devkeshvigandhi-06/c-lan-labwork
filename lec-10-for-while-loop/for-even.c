#include<stdio.h>

int main(){
	
	int n,i=1;
	printf("Enter any number :- ");
	scanf("%d",&n);
	
	for(i; i<=n; i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}