#include<stdio.h>

int main(){
	
	int x,y,ans;
	
	printf("Enter X value");
	scanf("%d",&x);
	
	printf("Enter Y value");
	scanf("%d",&y);
	
	ans=(x*x)-(2*x*y)+(y*y);
	
	printf("ans is %d",ans);
	
}