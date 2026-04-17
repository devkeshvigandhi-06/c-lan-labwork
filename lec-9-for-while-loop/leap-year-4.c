#include<stdio.h>

int main(){
	
	int f,l;
	printf("Enter first Year :- ");
	scanf("%d",&f);
	printf("Enter last Year :- ");
	scanf("%d",&l);
	
	for(f,l; f<=l; f+=4){
		
		printf("%d\n",f);
	}
}