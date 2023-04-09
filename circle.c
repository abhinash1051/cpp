#include<stdio.h>
#include<math.h>
double diameter(double Radius);

double main()
{
    float  Radius,diameter;
    printf("enter the value of diamenter :");
    scanf("%d",&Radius);

    diameter  = dia(Radius) ;

    printf("diameter of  a circe is %d :\n",diameter);

    return 0;
}

double diameter(double Radius)
{


    return (2*Radius);
}