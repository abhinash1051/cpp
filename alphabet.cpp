#include<iostream>
using namespace  std;
int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("character is alphabet :\n",ch);

    }
    else 
    {
        printf("character is not alphabet ",ch);
    }
    return 0;
}