// program to sum of geometrical series (GP)
#include<stdio.h>
#include<math.h>
int sumofGP(int a,int n,int r)
{
    int sum = (a*(1-pow(r,n)))/(1-r);
    return sum;

}
int main()
{
    int a,n,r;
    float sum =0;
    printf("enter the first number of gp : ");
    scanf("%d",&a);

    printf("enter the number of terms in GP :");
    scanf("%d",&n);

    printf("enter the common ratio of GP :");
    scanf("%d",&r);

    sum  = sumofGP(a,n,r);
    printf("sum of geometric seris  = %f ",sum);
    return 0;

}
