#include<stdio.h>
int main()
{
    int fact=1,i;
    int  x = 5;

    for(i=1;i<x;i++)
    {
        fact = fact * i;
    }
    printf("factorial of given number of %d is : %d",fact,x);
    return 0;
}