#include<stdio.h>

int main(){

	char name, temp, languageSkilled;
	unsigned short int age, mark;
	unsigned int pinCode;
	float percentage;
	
	//Name
	printf("Enter your name :");
	scanf("%c",&name);
	
	//Age
	printf("Enter your age :");
	scanf("%hu",&age);
	
	//10th mark
	printf("Enter marks obtained in 10th :");
	scanf("%hu",&mark);
	
	//area pin code
	printf("Enter area pin code :");
	scanf("%u",&pinCode);
	
	//10th percentage
	printf("Enter percentage of 10th :");
	scanf("%f",&percentage);
	
	//languageSkilled
	printf("Enter language you have skilled :");
	scanf(" %c",&languageSkilled);
	

	
	//Bio data
	printf("\n--- Prepared Bio Data ---");
	printf("\nName : %c",name);
	printf("\nAge : %hu",age);
	printf("\n10th Mark : %hu",mark);
	printf("\nArea pin code : %u",pinCode);
	printf("\n10th percentage : %f",percentage);
	printf("\nSkilled language : %c",languageSkilled);
	
	return 0;
	
}
