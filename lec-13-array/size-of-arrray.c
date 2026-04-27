#include<stdio.h>

int main(){
	int n;
	printf("Enter size of array :- ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<=n-1;i++){
		printf("enter array value :- ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n;i++){
		if(i==n){
			printf("The size of array is %d",i);
		}
	}
}