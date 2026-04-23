#include<stdio.h>

int main(){
	
	for(int i=1;i<=5;i++){
		
		for(int s=5;s>i;s--){
			printf(" ");
		}
		for(int k=i;k>=1;k--){
			printf("%d",k);
		}
		printf("\n");
	}
}