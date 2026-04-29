#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the array's row size:- ");
	scanf("%d",&n);
	printf("Enter the array's column size:- ");
	scanf("%d",&m);
	int array[n][m];
	int array2[n][m];
	int c[n][m];
	//a insertion
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter first array value:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",array[i][j]);
		}
		printf("\n");
	}
	//b insertion
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Enter second array value:- ");
			scanf("%d",&array2[i][j]);
		}
    }
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d",array2[i][j]);
			}
			printf("\n");
	}
		//sum
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i][j]=array[i][j]+array2[i][j];
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
}
