#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number :\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum +=i;
    }
    printf("sum of natural numebr = %d :\n",sum);
    return 0;
}