#include<stdio.h>

void cube(){
	int n,cube;
	printf("Enter any value :- ");
	scanf("%d",&n);
	cube= n*n*n;
	printf("Cube is : %d",cube);
}


void main(){
	cube();
}