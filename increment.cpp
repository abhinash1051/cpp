#include<iostream>
using namespace std;
class incredecre
{
    private :
    int a,b;

    public :

    void accept()
    {
        cout<<"enter two number \n";
        cout<<" ";

        cin>>a;
        cout<<" ";
        cin>>b;
    }
    void operator ++()
    {
        ++a;
        ++b;
    }
    void operator --()
    {
        --a;
        --b;
    }
    void display()
    {
        cout<<"A :\n"<<a;
        cout<<"B :\n"<<b;

    }

};
int main()
{
    incredecre id;
    id.accept();
    --id;

    cout<<"after decrementing :";

    id.display();

    ++id;
    cout<<"after incrementing :";
    id.display();

    return 0;
}