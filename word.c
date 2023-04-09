#include<stdio.h>
int main()
{
    int number,i=0,j,digit;
    char*word[1000];y

    printf("enter any inegar :");
    scanf("%d",&number);

    while (number)
    {
        digit  = digit%10;
        number = number/10;

        switch (digit)
        {
        case 0 : word[i++]  ="zero";
            break;
        case 1: word[i++] = "one";
        break;  

        case 2: word[i++] = "two";
        break;

        case 3: word[i++] = "three";
        break;

        case 4: word[i++] = "four";
        break;

        case 5: word[i++] = "five";
        break;

        case 6: word[i++] = "six";
        break;

        case 7: word[i++]  ="seven";
        break;

        case 8: word[i++] = "eight0";
        break;

        case 9: word[i++] = "nine";
        break;

        case 10: word[i++] = "ten";
        break;

        
        default:
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%s",word[j]);
    }
    return 0;
    

}