#include<stdio.h>
int main()
{
    int arr[10],i,item;
    printf("enter a seven element of an array :");
    for(i=0;i<=6;i++)
    
    scanf("%d",arr[i]);

    printf("search the array item :");
    scanf("%d",&item);
    for(i=0;i<=9;i++)
    {
        printf("\nenter item find at location %d",i+1);
    }
    if(i>9)
    {
        printf("item is not found");
    }
    return 0;

}