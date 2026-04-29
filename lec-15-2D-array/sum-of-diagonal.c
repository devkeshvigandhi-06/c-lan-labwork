#include<stdio.h>

int main(){
	int n,sum;
	printf("Enter the size of array :- ");
	scanf("%d",&n);
	int array [n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Enter the array value:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				sum+=array[i][j];
			}
		}
		printf("\n");
	}
	printf("The sum of diagonal elements of an array :-  %d",sum);
}