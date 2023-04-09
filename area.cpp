#include<stdio.h>
int main()
{
    int radius,area,cur;
    printf("enter the value of radius :\n");
    scanf("%d",&radius);

    area = 3.14*radius*radius;
    printf("area of circle is %d :: \n",area);

    cur = 2*3.14*radius;
    printf("circumference of circle is %d :: \n",cur);

    return 0;
}