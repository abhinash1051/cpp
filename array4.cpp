#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
    array<int,5>arr = {3,4,5,6,7};

    cout<<"0th element  :"<<arr[0]<<endl;
    cout<<"3rd element :"<<arr.at[3]<<endl;

    cout<<endl;
    return 0;
}