//x3+ 3x2y+3xy2+y3

#include<stdio.h>

int main(){
	
	int x,y,ans;
	
	printf("Enter X value");
	scanf("%d",&x);
	
	printf("Enter Y value");
	scanf("%d",&y);
	
	ans=(x*x*x)+(3*x*x*y)+(y*y*y);
	
	printf("ans is %d",ans);
}