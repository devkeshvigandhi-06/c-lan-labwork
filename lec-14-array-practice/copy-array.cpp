#include<stdio.h>

int main(){
	int n;
	printf("Enter array size:- ");
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		printf("Enter array value:- ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
		printf("%d",b[i]);
	}
	
}