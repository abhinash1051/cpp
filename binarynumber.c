#include<stdio.h>
int main()
{
    long int binarynumber,decimalnumber=0,j=1,reminder;

    printf("enter any number :");
    scanf("%d",&binarynumber);

    while(binarynumber!=0)
    {
        reminder = binarynumber%10;
        decimalnumber = decimalnumber + reminder;
        j=j*2;
        binarynumber = binarynumber/10;

    }
    printf("equivalent decimal value : %d",decimalnumber);    
    
    return 0;
}