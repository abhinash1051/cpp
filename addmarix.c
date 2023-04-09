#include<stdio.h>
#define size 3
int main()
{
    int A[size][size];
    int B[size][size];
    int C[size][size];

    int row,col;

    printf("enter element of matrix  A  : \n");
    
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    printf("enter elment of second matrix B :\n");

    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&B[row][col]);
        }
    }
    
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            C[size][size] = A[size][size] + B[size][size];
        }
    }

    printf("sum of matrices A+B = %d \n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d",C[row][col]);
        }
    }
    return 0;


}