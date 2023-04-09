#include<iostream>
using namespace std;
class area
{
    int length;
    int breadth;

public :
    void setdata(int l,int b)
    {
        length = l;
        breadth = b;
    }
    int  getarea()
    {
        return length*breadth;
    }

};
int main()
{
    area a;
    a.setdata(5,4);
    cout<<a.getarea()<<endl;
    return 0;
}
