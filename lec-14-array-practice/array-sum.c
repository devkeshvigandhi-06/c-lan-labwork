#include<stdio.h>

int main(){
	int n,sum;
	printf("Enter array size:- ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array value:- ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("The sum of array is %d",sum);
}