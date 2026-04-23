#include<stdio.h>

int main(){
	
	for(int i=5;i>=1;i--){
		
		for(int s=i;s<5;s++){
			printf(" ");
		}
		for(int k=i;k>=1;k--){
			
			if(k%2==0){
				printf("0");
			}else{
				printf("1");
			}
		}
		printf("\n");
	}
}