#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<windows.h>
_
#define ANSI_COLOUR_RED "x1b[31m"
#define ANSI_COLOUR_GREEN"x1b[32m"
#define ANSI_COLOUR_YELLOW"x1b[33m"
#define ANSI_COLOUR_BLUE"x1b[34m"
#define ANSI_COLOUR_MAGENTA"x1b[35m"
#define ANSI_COLOUR_CYAN"x1b[36m"
#define ANSI_COLOUR_RESET"x1b[0m"

// create matrix 4*4
void createMatrix(int arr[][4])
{
    int n = 15; 
    int num[n],i,j;
    for(i=0;i<15;i++)  
    num[i] = i+1;

    srand(time(null)); // for random number generation

    int lastIndex = n-1,index;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            if(lastIndedx >=0)
            {
                index = rand()%(lastIndex + 1 );
                arr[i][j] = num[index];
                num[index] = num[lastIndex--];
            }
        }
      arr[i-1][j-1] = 0;
}
// showing matrix
void showMatrix(int arr[][4])
{
    int i,j;
    printf("--------------------------");
    for(i=0;i<4;i++)
    {
        printf("|");
    }
    for(j=0;j<4;j++)
    {
        if(arr[i][j]!=0)
            printf("%2d |",arr[i][j]);
         else 
         printf("   | ");   
    }
    printf("---------------------------\n");
}
// winning check by this function
int winner(int arr[][4])
{
    int i,j,k=1;
    for(i=0;i<4;i++)
    {
    for(i=0;i<4;j++,k++)
        if(arr[i][j] !=k && k! = 16)
            break;
        if(j<4)
            break;
    }
    if(j<4)
        return 0;
    return 1;   
}
// swap function to swap two number
void swap(int*x,int*y)
{
    *x = *x + *y;
    *y = *x - *y;
    *X = *x - *y;
    printf(" ");
}
// reads the user input character and return ascii value of that
int raadEnteredkey()
{
    char c;
    c= _getch();
    if(c==-32)
         c = _getch();

         return c;

}
// shift up function
int shiftup(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break ;
         if(j<4)
         break;   
    }
    if(i==3) // shifting not possible
    return 0;

    swap(&arr[i][j],&arr[i+1][j]);
    return 1; // success
}
int shiftDown(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(arr[i][j]==0)
            break;
        if(j<4)
        break;
    }
    if(i==0)//shifting not possible
    return 0;

    swap(&arr[i][j],&arr[i-1][j]);//swap number
    return 1;
}
int shiftRight(int arr[][4])
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        if(arr[i][j]==0)
        break;

        if(j<4)
        break;
    }
    if(j==0) // shifting not possible
    return 0;

 swap(&arr[i][j],&arr[i][j-1]);
 return 1; //shift up success
}
// GAME RULES
void gameRule(int arr[][4])
{
    system("cls");

    int i,j,k=1;

    printf("\t\t MATRIX PUZZLE \n");
    printf("\n");
    printf(ANSI_COLOUR_RED "    RULES OF THIS GAME    \n" ANSI_COLOUR_RESET);
    printf(ANSI_COLOUR_RED" \n.you can move only 1 step at aa time by arrow key"ANSI_COLOUR_RESET);
    printf("\n\t Move up  : by up arrow key  ");
    printf("\n\tMove down : by down arrow key ");
    printf("\n\tMove left : by left arrow key");
    printf("\n\tMove Right: bt right arrow key ");

    printf(ANSI_COLOR_RED"\n2.you can move number at empty position only" ANSI_COLOUR_RESET);
    printf("\n");
    printf(ANSI_COLOUR_RED"       RULE OF THIS GAME       \n"ANSI_COLOUR_RESET);
    printf(ANSI_COLOUR_RED"\n.you can move only 1 stepat a time by arrow key "ANSI_COLOUR_RESET);
    printf("\n");
    printf(ANSI_COLOUR_RED"\n3. for each valid move :your total number of move will decreased bt 1 \n"ANSI_COLOUR_RESET);
    printf(ANSI_COLOUR_RED"4. winning situation : "ANSI_COLOUR_RESET);
    printf(ANSI_COLOUR_RED"number in 4*4 matrix should be in order from 1 to 15"ANSI_COLOUR_RESET);


    printf( " \n\n                winning situation           \n ");
    printf( "ANSI_COLOUR_YELLOW"--------------------------\ " ,ANSI_COLOUR_RESET);


    for(i=0;i<4;i++)
    {
         printf(ANSI_COLOUR_YELLOW" | "ANSI_COLOUR_RESET);   

        for(j=0;j<4;j++)
            {
                if(arr[i][j]!=0)
                printf(ANSI_COLOUR_YELLOW"%2d | "ANSI_COLOUR_RESET,4*i+j+1);
                else
                printf(ANSI_COLOUR_YELLOW" | "ANSI_COLOUR_RESET);
            }
            printf("\n");
    }   

printf("ANSI_COLOUR_YELLOW"----------------------------\n",ANSI_COLOUR_RESET);
printf("\n5.you can exit the game at any time by pressing 'E' OR 'e' ");
printf("\n5.try to win in minimum no of move \n");
printf("\n Enter any key to start .......");

int x = readEnteredkey();

}
int main()
{
    int arr[4][4];
    return arr;
    
    
}