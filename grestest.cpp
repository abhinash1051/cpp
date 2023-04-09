#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter three positive integar :\n");
    scanf("%d%d",&n1,&n2,&n3);

    if(n1>=n2 && n2>=n3)
    {
        printf(" %d is greatest",n1);
    }
    else if(n2>n3 && n2>n1)
    {
        printf("%d is greatest ",n2);
    }
    else if(n3>=n1 && n3>=n2)
    {
        printf("%d is greatest",n3);
    }
    return 0;

}