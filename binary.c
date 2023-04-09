#include<stdio.h>
#include<math.h>
int main()
{
    long int binarynumber,decimalnumber = 0,j = 1,reminder;

    printf("enter the BINARY number  : ");
    scanf("%d",&binarynumber);

    while(binarynumber != 0)
    {
        reminder = binarynumber%10;
        decimalnumber = decimalnumber + reminder*j;
        j = j*2;
        binarynumber = binarynumber/10;
    }
    prinyf(" equivalent decimal value  is  %d",decimalnumber);

    return 0;

}