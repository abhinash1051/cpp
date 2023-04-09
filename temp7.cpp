#include<iostream>
#include<string>
using namespace std;
class Shape
{
    string shape;

    public :
        Shape()
        {


        }
        Shape(string s)
        {
            shape  = s;
        }
        void setshape(string s)
        {
            shape  = s;
        }
        string getShape()
        {
            return  shape;
        }
};
template <typename T>
class circle : public Shape
{
    T x;
    T y;
    T radius;

    public :
    circle(T centreX, T centreY, T r, string s) :Shape(s)
    {
        x = centreX;
        y = centreY;
        radius = r;

    }
    circle(T centreX,T centreY,T r):Shape()

    {
        x = centreX;
        y = centreY;
        radius = r;

    }
    circle(T r) :Shape()
    {
        radius  = r;
    }
    circle()
    {
    }
       T area()
       {
        return 3.14*radius*radius;
       }

};
int main()
{
    circle<float>c(0.0,0.0,10.0,"corcle");
    cout<<"\n Area of circle A ::"<<c.area()<<endl;
    cout<<"\n colour of circle A ::"<<c.getShape()<<endl;
    return 0;

}
