#include<iostream>
using namespace std;
class base
{
    private :
    int i;
};
class derived : public base
{
    private :
    int j;  
};
int main()
{
    cout<<endl<<sizeof(derived)<<endl<<sizeof(base);
    derived o1;
    base o2;
    cout<<endl<<sizeof(o1)<<endl<<sizeof(o2);
    return 0;
}