#include<stdio.h>
int main()
{
    int num,reminder,tota=0,temp;
    
    printf("enter a number: \n");
    scanf("%d",&num);

    for(temp=num;num!=0;num=num/10)
    {
    r=num%10;
    sum = sum+(r*r*r);
    }
}
    