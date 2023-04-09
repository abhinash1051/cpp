#include<iostream>
using namespace  std;
class demo
{
    int a,b;
    public :
        demo()
        {
            a=b=0;
            cout<<"zero argument constructor called \n";
            show();
        }
        demo(int x,int y)
        {
            a=x;
            b=y;
            cout<<"two argument constructor called \n";
            show();
        }
        demo(int x)
        {
            a=b=x;
            cout<<"one argument constructor called \n";
            show();
        }
        void show()
        {
            cout<<"a="<<a<<"b="<<b<<endl;

        }
};
void main()
{
    demo d1;
    demo d2(10,20);
    demo d3(15);
    return ;
    
}