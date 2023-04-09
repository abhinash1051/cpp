#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i;
    int upper=0,lower=0,special=0;;
    printf("Please enter the string \n");
    gets(str);
    
    for(i=0; str[i] != '\0'; i++){
            if(str[i]>='A' && str[i]<='Z') {
                upper++;
    }
    else if(str[i]>='a' && str[i]<='z') { 
               lower++;
    }
    else{
        special++;
    }
    }
    printf("\nUpper case letters: %d",upper);
    printf("\nLower case letters: %d",lower);
    printf("\nSpecial characters: %d",special);
    getch();
    return 0;
}