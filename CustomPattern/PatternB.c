#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 5; j++){
		
			if(j == 1 || (i == 3 && j == 5) || (i == 5 && j == 5) || (i == 6 && j == 5) || (i == 7 && j == 2) || (i == 7 && j == 3)) 
				printf("* ");
			else if ((i == 1 && j == 2) || (j == 3 && i == 1) || (i == 2 && j == 5) || (i == 4 && j == 2) || (i == 4 && j == 3))
				printf("* ");
			else
				printf(" ");
		}
		
		printf("\n");
	
	}
		
	
	
}