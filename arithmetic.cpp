#include<iostream>
using namespace std;
class Arithmetic 
{
    private :
        float num;
    public :
        void accept()
        {
            cout<<"enter number \n";
            cin>>num;
        }
        Arithmetic operator +(Arithmetic &a)
        {
            Arithmetic t;
            t.num = num+a.num;
            return t;
        }
        Arithmetic operator -(Arithmetic &a)
        {
            Arithmetic t;
            t.num=num - a.num;
            return t;
        }
        Arithmetic operator *(Arithmetic &a)
        {
            Arithmetic t;
            t.num = num * a.num;
            return t;
        }
        Arithmetic operator /(Arithmetic &a)
        {
            Arithmetic t;
            t.num = num / a.num;
            return t;
        }
        void display()
        {
            cout<<num;
        }
};
int main()
{
    Arithmetic a1,a2,a3;
    a1.accept();
    a2.accept();

    a3 = a1+a2;

    cout<<"\n -------------------------------------------------";
    cout<<" \n \n addition of two number :";
    a3.display();


    a3 = a1-a2;
    cout<<" \n \n subtraction of two number :";
    a3.display();
     
    a3 = a1*a2;
    cout<<" \n \n multiplication of two number :";
    a3.display();

    a3 = a1/a2;
    cout<<"\n\n divisoin of two number :";
    a3.display();

    return 0;
}