//1.WAP to convert given string in lowercase.

#include<stdio.h>
void main(){

	char a[20];
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		if (a[i] != 0 && (a[i] >= 'A' && a[i] <= 'Z')){
		
			a[i] = a[i] + 32;
		
		}
	
	}
	
	printf("\n\nConverted(LowerCase) String : %s", a);

}
