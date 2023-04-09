#include<iostream>
using namespace std;
int main()
{
    char ch;
    printf("enter a alphabet : \n");
    scanf("%c",&ch);

    if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
    {   
        printf("character is vowel :\n");
    }
    else if(ch == 'A' || ch == 'E' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("character is vowel :\n");
    }
    else{
        printf("character is constant :\n");
    }
    return 0;
    
}