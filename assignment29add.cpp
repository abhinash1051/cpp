#include<iostream>
using namespace std;
class adddata
{
    protected:
     int num1 , num2;

    public :
     void accept()
     {
        cout<<"enter the first number "<<endl;
        cin>>num1;

        cout<<"enter the second number"<<endl;
        cin>>num2;
     }
};
class addition : public adddata
{
    int sum;
    public :
    void add()
    {
        sum  = num1 + num2;
    }
    void display()
    {
        cout<<"addition of two number is  :"<<sum;
    }
};
int main()
{
    addition a;
    a.accept();
    a.add();
    a.display();
    return 0;

}