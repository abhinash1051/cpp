/* C Program to find Sum of Geometric Progression Series */
#include <stdio.h>
#include<math.h>
int sumofGP(int a, int n, int r)
{
    int sum = (a * (1 - pow(r, n))) / (1- r);
    return sum;
}

int main() {
    
    int a, n, r;
    float sum = 0;
    
    printf(" Please Enter First Number of an G.P Series:  ");
    scanf("%d", &a);
    printf(" Please Enter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);
    printf(" Please Enter the Common Ratio:  ");
    scanf("%d", &r);
    
    sum = sumofGP(a, n, r);
    printf("\n The Sum of Geometric Progression Series =  %f\n", sum);
    return 0;
}