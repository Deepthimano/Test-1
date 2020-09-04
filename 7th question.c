/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
7.)question
#include <stdio.h>

int main()
{
    int n,x,val;
    scanf("%d",&n);
    while(n>9)
    {
        val=0;
        while(n>0)
        {
            x-n%10;
            val=val+x;
            n=n/10;
        }
        n=val;
    }
printf("%d",n);
}