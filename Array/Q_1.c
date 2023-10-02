
#include<stdio.h>
void main(){

	short n;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	printf("Enter array elements:\n");
	
	for (short i = 0; i < n; i++){
	
		printf("a[%hi] = ", i);
		scanf("%hi", &a[i]);
	
	}
	
	printf("Length of an Array : %hi", n);
	

}