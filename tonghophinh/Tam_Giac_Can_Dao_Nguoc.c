
#include<stdio.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=n-1;i>=0;i--){
		for(j=1;j<n-i;j++){
			printf("  "); 
		} 
		
		for(j=1;j<2*i+2;j++){
		
			printf("* "); 
		} 
		printf("\n"); 
	}
} 
