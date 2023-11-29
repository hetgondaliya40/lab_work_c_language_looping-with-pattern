#include<stdio.h>

void main(){
	
	int i,k=1;
	int j;
	char a = 'A';
	
	for (i=1; i<=5; i++){
		for(j=1; j<=3; j++){
			if (i%2!=0){
				printf("*# ");
				k++;
			}else{
				printf("** ");
			
			}
		}
		printf("\n");
	}
}
