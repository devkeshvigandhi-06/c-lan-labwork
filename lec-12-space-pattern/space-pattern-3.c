#include<stdio.h>

int main(){
	for(int i=5;i>=1;i--){
		for(int s=1;s<i;s++){
			printf(" ");
		}
		for(int k=5;k>=i;k--){
			printf("%d",i);
		}
		printf("\n");
	}
}