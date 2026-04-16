#include<stdio.h>

int main(){
	
	int f,s;
	printf("Enter First number:- ");
	scanf("%d",&f);
	printf("Enter Second number:- ");
	scanf("%d",&s);
	while(f<=s){
		printf("%d\n",f);
		f+=4;
	}
	
}