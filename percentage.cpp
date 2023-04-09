#include<stdio.h>
int main()
{
    float avg,maths,science,english,sst,hindi,total,percentage;

    printf("enter a  5 subjetc :----------- \n");

    printf("enter maths number  :\n");
    scanf("%f",&maths);

    printf("enter science number :\n");
    scanf("%f",&science);

    printf("enter english number :\n");
    scanf("%f",&english);

    printf("enter sst number :\n");
    scanf("%f",&sst);

    printf("enter hindi number :\n");
    scanf("%f",&hindi);

    total = maths + science + english + sst + hindi ;
    avg = total/5.0;

    percentage = (total/500.0)*100;

    printf("total marks = %f \n",total);
    printf("avg marks = %f \n",avg);
    printf("percentage = %f \n",percentage);

    return 0;


}