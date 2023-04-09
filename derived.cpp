#include<iostream>
using namespace std;
class base
{
    public :
    virtual void fun1()
    {
        cout<<endl<<"in base::fun1";
    }

};
class derived1 : public base
{
    public :
    void fun1()
    {
        cout<<endl<<"in derived ::fun1";
    }
    virtual void fun2()
    {
        cout<<endl<<"in derived1::fun2";
    }
};
class derived2 :public derived1
{
    public :
    void fun1()
    {
        cout<<endl<<"in derived2 :: fun1";

    }
    void fun2()
    {
        cout<<endl<<"in derived2::fun2";
    }
};
int main()
{
    base *ptr1;
    derived1*ptr2;
    base b;
    derived2 d;
    ptr1 = &d;
    ptr2  =&d;
    ptr1->fun1();
    ptr2->fun1();
    ((derived1*)ptr2)->fun2();
    return 0;
}