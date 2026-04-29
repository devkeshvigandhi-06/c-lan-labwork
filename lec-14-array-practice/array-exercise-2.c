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
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("the element of reverse array is:- ");
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}