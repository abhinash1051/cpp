#include<iostream>
using namespace std;
void test_try(int num)
{
    char*c = "string handling";

    try
    {
        if(num>=0 && num<=9)
            throw num;
        else
        cout<<"\n it is not a single number";   
    }
    catch(int num)
    {
        cout<<"\n it is a single number";
    }
    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"enter a number :\n";
    cin>>num;

    test_try(num);
    return 0;


}