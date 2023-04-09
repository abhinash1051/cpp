#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
class shape
{
    protected :
        double x;

    public :
    void set_data(double radius)
    {
        x = radius;
    }
    virtual void dispaly_area() = 0;

};
class area : public shape
{
    public:
        void display_area()
        {
             cout<<"area of circe is :"<<3.14*x*x;
        }

};
int main()
{
    area a;
    a.set_data(10,15);

    
    a.dispaly_area();
    return 0;
}
