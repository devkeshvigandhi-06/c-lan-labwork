#include<stdio.h>

    int findSum(int arr[],int size){
    int sum;	
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}


int main(){
	int n;
	
	printf("Enter array size:- ");
	scanf("%d",&n);
	
	int arr[n];

	for(int i=0;i<n;i++){
		printf("Enter array value:- ");
	    scanf("%d",&arr[i]);
	}
	
	int ans=findSum(arr,n);
	printf("The total of sum is %d" ,ans);
	
	return 0;
}