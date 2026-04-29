#include<stdio.h>
int main(){
	int array[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("Enter array elements:- ");
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d",array[i][j]);
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==1&&(j==1||j==2||j==3||j==4)||i==2&&(j==1||j==2||j==3||j==4)||(i==3&&(j==1||j==2||j==3||j==4))){
					printf("     ");
			}
			else{
			printf("%d",array[i][j]);
		}
		}
	
	}
}