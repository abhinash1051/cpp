#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,num;

    cout<<"enter a positive integar :";
    cin>>num;

    for( i=1;i<=num;i++)
    {

            fact = fact * i;
    }
    cout<<"Factorial of Given Number is: " << fact <<endl;
    return 0;
}
