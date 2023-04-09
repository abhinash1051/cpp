#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],n,i,j,k,m,p,q;

    printf("enter the order of first matrix \n :");
    scanf("%d%d",&m,&n);

    printf("enter the order of secomd matrix \n");
    scanf("%d%d",&p,&q);

    if(n != p)
    {
        printf("matrix is not incompatible for multiplication \n");
    }
    else 
    {
        
    }

    printf("enter the value of N : ");
    scanf("%d",&n);

    printf("enter the element of matrix A:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elment of matrix  B :\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = 0;
            for(k = 0;k<n; k++)
            {
                c[i][j]  += a[i][j] * b[k][j]; 
            }
        }
    }
    printf("the product of the two matrix is :-\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}