#include<stdio.h>

int main(){
	int n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array elements: ");
		scanf("%d",&arr[i]);
	}
	int track=arr[0];
	printf("The Unique elements found in array are : ");
	for(int i=0;i<n;i++){
		if(track!=arr[i]){
			printf("%d",arr[i]);
		}
	}
}