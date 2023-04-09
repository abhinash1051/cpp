#include<iostream>
using namespace std;
class complex
{
    private :
        int real;
        int img;
    public :
        void display()
        {
            cout<<" real= "<<real<<" img =" <<img;
        } 
        complex(int x)
        {
            real =x;
            img = x;
        }    
};
int main()
{
    complex c=5;
    c.display();
    return 0;
}
