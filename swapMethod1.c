#include <stdio.h>

//Without using third variable
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    printf("\n\nvalues before swaping \nx = %d \ny = %d",x, y);
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("\n\nvalues after swaping \nx = %d \ny = %d",x, y);
    return 0;
}
