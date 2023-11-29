#include<stdio.h>

void main(){
	
	char i,j,k='A';
	
	for (i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}
