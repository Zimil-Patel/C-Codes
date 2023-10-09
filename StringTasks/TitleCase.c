//6.WAP to convert given string in Title Case.

#include<stdio.h>
void main(){

	char a[20];
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
			a[i] -= 32;
		else if(i != 0 && (a[i] >= 'A' && a[i] <= 'Z'))
			a[i] += 32;
	
	}
	
	printf("\n\nConverted(Title) String : %s", a);

}