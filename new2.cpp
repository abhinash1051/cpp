#include<iostream>
using namespace std;
class base
{
    private :
        int x,y; 

    public :
        void accept()
        {
            cout<<"enter the first number "<<endl;
            cin>>x;
            cout<<"enter the second number "<<endl;
            cin>>y;
        }    
        
};
class addition : public base
{
    public :
        add()
        {
            return (x + y);
        }

}
int main()