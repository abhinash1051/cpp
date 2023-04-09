#include<iostream>
using namespace std;
int main()
{
    char cal;
    cout<<"enter operator : +,-,*,/-----------------------------\n";
    cin>>cal;


    int n1,n2;
    cout<<"enter two operands :";
    cin>>n1>>n2;

    switch(cal)
    {
        case '+' :
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;

        case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;

        case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;

        case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;

        default :
        cout<<"ERROR ! operator is not correct :";
    }
    return 0;


}