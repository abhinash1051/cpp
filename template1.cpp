#include<iostream>
using namespace std;
template<class T>
T addition(T num1,T num2)
{
    return(num1 + num2);
}
int main()
{
    cout<<"\n addition of multiple ytype of data types using generic Template ";
    cout<<"\n--------------------------------------------------------------------";
    cout<<"\n addition of integar parameters :"<<addition<int>(10,20);
    cout<<"\n addition of float parameters :"<<addition<float>(13.3,14.80);

    return 0;
}
