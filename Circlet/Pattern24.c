#include<stdio.h>
void main(){

	short i, j, counter;
	
	for (i = 5; i >= 1; i--){
		
	
		for(counter = i; counter > 1; counter--)
			printf("  ");
			
		for (j = 5; j >= i; j--)
			printf("%hi ", j);
			
	
		if (i < 5){
		
			for (j = (i+1); j <= 5; j++)
				printf("%hi ", j);
		
		}
	
		printf("\n");
	
	}
	


}