#include<stdio.h>
int add(int x,int y,int c);
int main()
{
    int a,b,c,sum;

    printf("enter any three number :");
    scanf("%d%d%d",&a,&b,&c);

    sum = add(a,b,c);

    printf("sum = %d\n",sum);

    return 0;

}
int add(int x,int y,int z)
{
    int d;
    d = x + y + z;
    return (d);
}
