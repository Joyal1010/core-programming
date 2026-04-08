#include<stdio.h> 
void main() 
{ 
int a, b, c, d, total, per; 
printf("Enter the marks of four subjects\n"); 
scanf("%d%d%d%d",&a, &b, &c, &d); 
total=a+b+c+d; 
printf("Total = %d\n",total); 
per=((float)total/400)*100; 
printf("Percentage= %d\n",per); 
if(per>=95) 
printf("Your grade is S\n"); 
else if(per<95 && per >=90) 
printf("Your grade is A+\n"); 
else if(per<90 && per >=85) 
printf("Your grade is A\n"); 
else if(per<85 && per >=80) 
printf("Your grade is B+\n"); 
else if(per<80 && per >=75) 
printf("Your grade is B\n"); 
else if(per<75 && per >=70) 
printf("Your grade is C+\n"); 
else if(per<70 && per >=65) 
printf("Your grade is C\n"); 
else if(per<65 && per >=60) 
printf("Your grade is D\n"); 
else 
printf("You Failed in the Examination\n"); 
}