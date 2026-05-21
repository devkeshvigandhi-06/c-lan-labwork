#include<stdio.h>

int main(){
	int n;
	printf("Enter size of Array:- ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter Array Elements:- ");
		scanf("%d",&arr[i]);
	}
	int *ptr[n];
	for(int i=0;i<n;i++){
		ptr[i]=&arr[i];
	}
	int **ptr1[n];
	for(int i=0;i<n;i++){
		ptr1[i]=&ptr[i];
	}
	for(int i=n-1;i>=0;i--){
		printf("%d\t",**ptr1[i] * **ptr1[i]);
	}
	
	
}