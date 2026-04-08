#include <stdio.h> 
void main()  
{ 
    float units, totalBill; 
    printf("Enter the number of units consumed: "); 
    scanf("%f", &units); 
        if (units <= 50)  
        { 
        totalBill = units * 0.50; 
        }  
        else if (units <= 150)  
        { 
        totalBill = 50 * 0.50 + (units - 50) * 1.75; 
        }  
        else if (units <= 250)  
        { 
        totalBill = 50 * 0.50 + 100 * 1.75 + (units - 150) * 3; 
        }  
        else  
        { 
        totalBill = 50 * 0.50 + 100 * 1.75 + 100 * 3 + (units - 250) * 5; 
        } 
        printf("Electricity Bill: Rs. %.2f\n", totalBill); 
}