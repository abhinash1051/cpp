#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;

    cout<<"enter a positive integar :";
    cin>>num;

    n = num;

    
    {
        digit = num %10;
        rev = (rev*10)+digit;
        num = num/10; 
    }
    while(num!=0);
    cout<<"the reverse of a number is :"<<rev<<endl;

    if(n==rev)
    cout<<"the number is palidrome :";
    else
    cout<<"the number is not a palidrome";
    return 0;

}