#include<stdio.h>

int main(){
	
	int n,i=1;
	printf("Enter any number :- ");
	scanf("%d",&n);
	
	for(n; n>=i; n--){
		if(n%2!=0){
		printf("%d\n",n);
		}
	}
}