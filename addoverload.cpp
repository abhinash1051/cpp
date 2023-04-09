#include<iostream>
using namespace std;
class complex
{
    int real=0;
    int img=0;

    public :
     complex(int i,int r)
    {
        real = r;
        img = i;
    }
    void show()
    {
        cout<<real<<"+i"<<img;
  
    }
    complex operator +(complex &p)
    {
        complex w;
        w.real = real+p.real;
        w.img = img+p.img;
    }


};
int main()
{
    complex s(3,4);
    complex t(4,5);

    complex m;

    m=s+t;
    m.show();
    t.show();
    s.show();
    

}  