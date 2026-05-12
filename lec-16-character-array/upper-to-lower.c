#include<stdio.h>

int main(){
	char str[10];
	for(int i=0;i<10;i++){
		printf("Enter any character: ");
		scanf("%s",&str[i]);
	}
	for(int i=0;i<10;i++){
		char low=str[i]+32;
		printf("%c",low);
	}
}