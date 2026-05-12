#include<stdio.h>

int main(){
	int n,n2,n3,i,max,temp=0;
	printf("Enter array size:- ");
	scanf("%d",&n);
	printf("Enter array size:- ");
	scanf("%d",&n2);
	int a[n],b[n2];
	for(int i=0;i<n;i++){
		printf("Enter array 1 elements:- ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n2;i++){
		printf("Enter array 2 elements:- ");
		scanf("%d",&b[i]);
	}
	n3=n+n2;
	int c[n3];
	for(i=0;i<n;i++){
			c[i]=a[i];
	}
	for(int j=0;j<n2;j++){
	    c[i]=b[j];
	    i++;
	}
	for(int i=0;i<n3;i++){
		printf("%d ",c[i]);
	}
	
	printf("\n");

	for(int i=0;i<n3;i++){
		for(int j=0;j<n3-1;j++){
			if(c[j]<c[j+1]){
			
               temp=c[j+1];
               c[j+1]=c[j];
               c[j]=temp;
			}	
		}

	}
		for(int i=0;i<n3;i++){
		printf("%d ",c[i]);
	}
}