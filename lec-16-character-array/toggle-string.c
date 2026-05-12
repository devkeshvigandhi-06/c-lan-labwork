#include<stdio.h>

int main(){
	char str[10];
	for(int i=0;i<10;i++){
		printf("Enter any character: ");
		scanf("%s",&str[i]);
	}
	int a[10];
	for(int i=0;i<10;i++){
		 a[i]=str[i];
		printf("%d\n",a[i]);
    }
	for(int i=0;i<10;i++){
		if(str[i]>='A' && str[i]<='Z'){
			char low=str[i]+32;
			printf("%c",low);
		}else if(str[i]>='a' && str[i]<='z'){
			char cap=str[i]-32;
			printf("%c",cap);	
		}
	}
}