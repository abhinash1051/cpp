#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,descrimenant,root1,root2,realpart,imgpart;
    printf("enter coefficient of a b c :\n");
    scanf("%f%f%f",&a,&b,&c);

    descrimenant = b*b - 4*a*c;
    if(descrimenant>0)
    {
        root1 = (-b+sqrt(descrimenant))/(2*a);
        root2 = (-b-sqrt(descrimenant))/(2*a);

        printf("root1=%f and root2 = %f",root1,root2); 
           }
        else if(descrimenant == 0)
        {
            root1 = root2 = -b/(2*a);
            printf("root1=root2=%f",root1);

     }
     else 
     {
        realpart = -b/(2*a);
        imgpart = sqrt(-descrimenant)/(2*a);
        printf("root1 = %f+%f and root2 = %f-%f"realpart,imgpart,realpart,imgpart);


     }
     return 0;
     
}