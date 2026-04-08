#include<stdio.h> 
void main() 
{ 
    char c; 
    printf("Enter a character\n"); 
    scanf("%c",&c); 
    if(c>=65 && c<=90) 
    { 
    printf("%c converted to: ",c); 
    c=c+32; 
    printf("%c\n ",c); 
    } 
        else if(c>=97 && c<=122) 
        { 
        printf("%c converted to: ",c); 
        c=c-32; 
        printf("%c\n ",c); 
        } 
        else 
        { 
        printf("%c is not in English alphabet\n",c);
    }
}