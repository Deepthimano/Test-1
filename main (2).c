/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
4.)Find out all 1's present in the programme
#include <stdio.h>

int main()
{
    int st,en,X=0,count=0;
    scanf("%d %d",&st,&en);
    for(int i=st;i<=en;i++)
    {
        while(i>0)
        {
            X=i%10;
            if(X==1)
            {
                count++;
            }
            i=i/10;
        }
    }
    printf("%d",count);

    
}
