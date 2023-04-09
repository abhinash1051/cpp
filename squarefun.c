#include<stdio.h>
float square(float);

int main()
{
    int x,y;
    printf("enter any number :");
    scanf("%f",&x);

    y = square(x);

    printf("square of %f is %f \n",x,y);
    return 0;


}
float square(float x)
{
    float y;
     y = x * x;
     return (y); 
}
