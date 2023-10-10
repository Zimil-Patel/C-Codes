//write c program to remove spaces and blanks from string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];

    puts("Enter the string : ");
    gets(str);
    
    short freq = 1;
    
    for (short i = 0; str[i] != '\0'; i++){
        
        freq =1;
        for (short j = 0; str[j] != '\0'; j++){
            
            if (i == j)
                continue;
            else if (str[i] == str[j]){
                
                
                freq++;
                if ( freq > 1)
                    str[j] = ' ';
            }    
        }         
    }
    puts("\n\nString after removing Duplicate character : ");
    puts(str);   
}