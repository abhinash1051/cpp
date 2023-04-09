#include<iostream>
using namespace std;
int main()
{
    int year;
    printf("enter a year :");
    scanf("%d",&year);

    if(((year%=0)&&(year%100!=0)) || (year%400==0))
    {
        printf("%d is a leap year :",year);

    }
    else
    {
        printf("%d is not a leap year :",year);

    }
    return 0;
}