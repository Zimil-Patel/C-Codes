#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++)
	{
	
		for(j = 1; j <= 5; j++)
		{
		
			if(j == 3)
				if((i == 1 && j == 3) || (i == 2 && j == 3))
					printf("  ");
				else
					printf("* ");
			else if ((i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3) || (i == 1 && j == 5) || (i == 2 && j == 4))
				printf("* ");
			else
				printf("  ");
				
				
		}
		printf("\n");	
	}
	
}