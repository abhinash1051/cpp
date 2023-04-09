#include<iostream>
using namespace std;
class complex
{
    private :
    int real;
    int img;

    public :

    void set()
    {
        cout<<"enter real and img part :";
        cin>>real>>img;

    }
    friend complex sum(complex,complex);
    void display();
};
void complex::display()
{
    cout<<"the sum of the complex num is"<<real<<"+i"<<img;

}
complex sum(complex a,complex b)
{
    complex t;
    t.real  = a.real+b.real;
    t.img = a.img + b.img;
    return t;

}
int main()
{
    complex a,b,c;
    a.set();
    b.set();

    c = sum(a,b);
    c.display();
    return 0;
}