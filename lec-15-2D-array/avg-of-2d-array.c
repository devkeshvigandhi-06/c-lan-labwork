#include<stdio.h>

int main(){
	int n,m,sum,avg,count;
	printf("Enter the Array's row size :- ");
	scanf("%d",&n);
	printf("Enter the Array's column size:- ");
	scanf("%d",&m);
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Enter Array Elements:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum+=array[i][j];
			count++;
		}
	
	}
		avg=sum/count;
		printf("Average of an Array is %d",avg);
}