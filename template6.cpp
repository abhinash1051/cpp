#include<iostream>
using namespace std;
template<class T>
T sumofarray(T a[],int length)
{
    T ret = a[0];
    for(int i = 1;i<length;i++)
        ret += a[i];

     return ret;   
}
int main()
{
    int int_data[5];
    float float_data[5];
    int i = 0;

    cout<<"\n input 5 integar ::\n"<<endl;
    for(i = 0;i <5;i++)
    cin>>int_data[i];

    cout<<"\n sum of above is ::"<<sumofarray(int_data,5)<<endl;
    cout<<"\n input 5 float ::\n"<<endl;
    for(i=0;i<5;i++)
    cin>>float_data[i];

    cout<<"\n sum of above is ::"<<sumofarray(float_data,5)<<endl;

    cin.get();
    return 0;


}