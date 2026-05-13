#include<stdio.h>

int getLength(){
	char str[100];
	int count=0;
	printf("Enter any string:- ");
   	scanf("%s",&str);
	while(str[count]!=0){
		count++;
	}
	return count;
}

   int main(){
   	int length=getLength();
   	printf("Length is : %d ",length);
}