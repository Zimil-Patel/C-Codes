#include<stdio.h>
void main(){

	short i, j, k = 65;
	
	for(i = 1; i <= 5; i++){
	
		for(j = 1; j <= i; j++){
		
			printf("%c ", k);
			k++;
		}
		printf("\n");
	
	}

}