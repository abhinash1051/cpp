#include<iostream>
using namespace std;
template<class T>
T swapData(T &n1,T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}
int main()
{
    int i1 = 6 ,i2 = 3;
    float f1 = 7.2, f2 = 4.3;
    char c1 = 'p',c2 = 'c';

    cout<<"BEFORE SWAPPING DATA TO FUNCTION TEMPLATE :\n";
    cout<<"\ni1 = "<<i1<<"\ni2 = "<<i2;
    cout<<"\nf1 ="<<f1<<"\nf2 = "<<f2;
    cout<<"\nc1  ="<<c2<<"\nc2 = "<<c2;

    swap(i1,i2);
    swap(f1,f2);
    swap(c1,c2);

    cout<<"\nAFTER SWAPPING DATA TO FUNCTION TEMPLATE :\n";

    cout<<"\ni1 = "<<i1<<"i2 ="<<i2;
    cout<<"\nf1 = "<<f1<<"f2 = "<<f2;
    cout<<"\nc1 = "<<c1<<"c2 = "<<c2;

    return 0;
}