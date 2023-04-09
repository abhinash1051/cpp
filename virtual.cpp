#include<iostream>
#define PI 3.14
using namespace std;
class shape
{
    protected :

    double l1,l2;
     public :
        void set_data(double length1,double length2 = 0)
        {
            l1  = length1; 
            l2 =  length2;
        }
        virtual void dispaly_area() = 0;

};
class triangle : public shape
{
    public :
        void display_area()
        {
            cout<<"area of triangle is  :"<<l1*l2/2<<endl;
        } 

};
class rectangle : public shape 
{
    public :
    void display_area()
    {
        cout<<"area of triangle is :"<<l1*l2<<endl;
    }

};
int main()
{
    
    triangle t;
    rectangle r;
    
    t.set_data(13,10);
    r.set_data(14,18);

    t.dispaly_area();
    r.dispaly_area();

    return 0;


}
