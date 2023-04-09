#include<iostream>
using namespace std;
class complex 
{
    float real;
    float img;

    public :
    complex()
    {
        real = 0;
        img = 0;
    }

    void input(float x,float y)
    {
        real = x;
        img  = y;
    }
    void show()
    {
        cout<<real<<"+i"<<img;

    }
    complex operator+(complex &p)
    {
        complex w;
        w.real = real + p.real;
        w.img = img + p.img;
        return w;

    }
    
};
int  main()
{
    complex c1,c2,c3;

    c1.show(2,3);
    c2.show(4,5);

    
    
}