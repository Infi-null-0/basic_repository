#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2;
    printf("PROGRAM TO PRINT TWO NUMBERS\n\nEnter the two numbers :");
    scanf("%d%d", &num1, &num2);
    printf("\nThe number 1 is : %d\nThe number 2 is : %d\n\nTHE DIFFERENCE IN BOTH THE NUMBERS ARE : %d\n\nTHE PRODUCT AND QUOTIENT ARE : %d %d\n\nEND OF PROGRAM", num1, num2, num1 - num2, num1 * num2, num1 / num2);
}