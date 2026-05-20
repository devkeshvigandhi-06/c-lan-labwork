#include<stdio.h>

int main(){
	int a;
	printf("Enter Array size:- ");
	scanf("%d",&a);
	int arr[a];
	for(int i=0;i<a;i++){
		printf("Enter Array Elements:- ");
		scanf("%d",&arr[i]);
	}
	
	
	for(int i=0;i<a;i++){
	int *ptr;
	ptr=&arr[i];
	*ptr=arr[i]*arr[i];
	 printf("%d\n",*ptr);
	}
}