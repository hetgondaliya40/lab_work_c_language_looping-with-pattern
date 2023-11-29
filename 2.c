#include<stdio.h>

void main(){
	
	int i,j,k=1;
	
	for (i=2; i<=6; i++){
		for(j=2; j<=6; j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}
