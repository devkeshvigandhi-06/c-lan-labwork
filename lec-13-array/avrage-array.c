#include<stdio.h>

int main(){
	int n,s,avg;
	printf("Enter array size :- ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter array elements :- ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		s+=a[i];
		avg=s/n;
	}
	printf("The sum of array element is %d",avg);
}