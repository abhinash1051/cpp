#include<iostream>
using namespace std;
class A
{
    protected :
    int num1;

    public :
        A(int n)
        {
            num1 = n;
        }
        void show()
        {
            cout<<"\n value = "<<num1<<endl;

        }

        void swap( A*n2)
        {
            int n3;
             n3 = num1;
             num1  = n2->num1;
             n2 ->num1 =  n3;

        }
};
int main()
{
    A p(30);
    A c(40);
    cout<<"\n before swapping \n";
    p.show();
    c.show();
    p.swap(&c);
    cout<<"\n after swaping\n";
    p.show();
    c.show();

    return 0;
}
