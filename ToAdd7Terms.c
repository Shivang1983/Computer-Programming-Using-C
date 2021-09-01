#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j;
    float fact,sum=0.0;
    int clrscr();
    i=1;
    while(i<=7)
    {
        fact=1.0;
        for(j=1; j<=i; i++)
        { 
            fact=fact*j;
        }
        sum=sum+i/fact;
        i++; 
        }
        printf("\n Sum of series is %f sum");
        getch();
}