#include<stdio.h>

int main(){
	int n,count=0;
	printf("Enter array size:- ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter array value:- ");
		scanf("%d",&arr[i]);
	}
	int track=arr[0];
	for(int i=0;i<n;i++){
		if(track==arr[i]){
			count++;
			track=arr[0];
		}
	}
	printf("%d",count);
}