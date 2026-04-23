#include<stdio.h>

int main(){
	
	for(int i=5;i>=1;i--){
		for(int s=i;s<5;s++){
			printf(" ");
		}
		for(int k=i;k>=1;k--){
			printf("%d",k);
		}
		printf("\n");
	}
}