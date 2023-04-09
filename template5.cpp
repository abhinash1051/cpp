#include<iostream>
using namespace std;
template<class T>
T add(  T num1 ,T num2)
{
    return(num1+num2);
}
int main()
{
    int n1,n2,addition;

    cout<<"enter any two number : \n";
    cout<<"\n----------------------\n";
    cin>>n1>>n2;

    addition = n1+n2;

    cout<<"addition is : "<<addition;
    return 0;
}