/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Program to swap two numbers
#include <stdio.h>
int main()
{
    int x=10,y=5;
    printf("Enter x and y \n%d \n%d",x,y); 
    printf(" before swapping x=%d \ny=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
   printf(" After swapping without a third variable x=%d \n y=%d",x,y);
    return 0;
}