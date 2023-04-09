#include<stdio.h>
int main()
{
    int i,fact=1,num;

    printf("enter a number :\n");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
        fact = fact + i;
    }
    printf("factorial of number is %d :\n",fact);
    return 0;

}