#include<stdio.h>

int main(){
	int n;
	printf("Enter array size:- ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter array elements:- ");
		scanf("%d",&a[i]);
	}
	printf("the element of array is: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}